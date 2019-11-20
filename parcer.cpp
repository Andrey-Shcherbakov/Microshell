#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <regex>
#include <string>
//#include "parcer.hpp"
#include <sys/wait.h>

/*fun::fun(std::string &token, std::vector<char *> &p){//input str are preparced for exec
    //std::cout << token <<" :it is my token\n";
    //filling(token, p);
}*/

void filling(std::string &token, std::vector<std::string> &args){
    std::istringstream tss(token);

    while (1)
    {
        std::string word;
        if(std::getline(tss, word, ' ')) args.push_back(word);
        else break;
    }
}

int main(){
    while(1){
        char cwd[256];
        getcwd(cwd, sizeof(cwd));
        uid_t euid = geteuid();
        if(euid == 0) std::cout << cwd << ">";
        else std::cout << cwd << "!>";

        std::string input;
        getline(std:: cin, input, '\n');

        if(input == "end") return 0;

        std::istringstream iss(input);
        std::vector <std::vector <std:: string> > P;
        std::string token;
        int k = 0;
        while (std::getline(iss, token, '|'))
        {
            P.push_back(std::vector <std:: string> ());
            filling(token, P[P.size() -1]);
            //std::cout << k  << P[k][0] << " check\n";
            k++;
        }
        if(P.size() > 1){
            pid_t lastp;
            std::vector <std:: vector <int> > pd(P.size()-1, (std::vector<int> (2,0)));
            for(int i = 0; i < pd.size(); i++) {int fd[2]; pipe(fd); pd[i][0] = fd[0]; pd[i][1] = fd[1];}
            for(int i = 0; i < P.size(); i++){
                lastp = fork();
                if(lastp == 0){//child
                    //std:: cout << "I'm a child " << getpid() << "\n";

                    if(i < pd.size()) {
                        close(STDOUT_FILENO);
                        dup2(pd[i][1], STDOUT_FILENO);
                     }
                    for(int j = 0; j < pd.size(); j++) close(pd[j][1]);

                    if(i > 0) {
                        close(STDIN_FILENO);
                        dup2(pd[i-1][0], STDIN_FILENO);
                    }
                    for(int j = 0; j < pd.size(); j++) close(pd[j][0]);

                    //std::cout << P.size() << " " << P[i][0] << " here\n";
                    std::vector <char *> p;
                    for (auto const &q: P[i]) {
                        p.push_back((char *)(q.c_str()));
                    }
                    p.push_back(NULL);
                    execvp(p[0], &p[0]);
                    perror("execvp");
                    exit(0);
                }
            }
            for(int j = 0; j < pd.size(); j++) {
                close(pd[j][0]);
                close(pd[j][1]);
            }
            //std:: cout << "I'm a parent " << getpid() << "\n";
            waitpid(lastp, NULL, 0);
        }
        else{
            pid_t lastp = fork();
            if(lastp == 0){//child
                std::vector <char *> p;
                for (auto const &q: P[0]) {
                    p.push_back((char *)(q.c_str()));
                }
                p.push_back(NULL);
                execvp(p[0], &p[0]);
                perror("execvp");
                exit(0);
            }
            //std:: cout << "I'm parent " << getpid() << "\n";
            waitpid(lastp, NULL, 0);
        }
    }
}

//std::regex border("([[:space:]]|\t)*(\\|)([[:space:]]|\t)*");
//input = std::regex_replace (input,border,"|");
//std::regex leading_spaces("([[:space:]]|\t)+");
//input = std::regex_replace (input,leading_spaces," ");

//std::regex zeile("\\(((^\\()*)\\)");

/*std:: smatch st;
while(std::regex_search (input, st, zeile, std::regex_constants::format_first_only)){
    std:: cout << st.str(1) << " here" << std:: endl;
    input = std::regex_replace (input,zeile, "VAR", std::regex_constants::format_first_only);
}*/
