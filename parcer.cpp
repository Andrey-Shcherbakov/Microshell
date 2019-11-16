#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <regex>
#include <string>

int main(){
    std::regex leading_spaces("([[:space:]]|\t)+");
    std::regex border("([[:space:]]|\t)*(\\|)([[:space:]]|\t)*");
    while(1){
        char cwd[256];
        getcwd(cwd, sizeof(cwd));
        std::cout << cwd << ">";

        std::string input;
        getline(std:: cin, input, '\n');

        if(input == "end") return 0;
        input = std::regex_replace (input,leading_spaces," ");
        input = std::regex_replace (input,border,"|");

        std:: istringstream iss(input);
        std::string token;
        while (std::getline(iss, token, '|'))
        {
            std::cout << token << std::endl;
        }

    }
}
