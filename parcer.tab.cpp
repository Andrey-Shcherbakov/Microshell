// A Bison parser, made by GNU Bison 3.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2019 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.





#include "parcer.tab.hpp"


// Unqualified %code blocks.
#line 38 "parcer.ypp"

    #define YY_DECL yy::parser::symbol_type yylex ()
    YY_DECL;

#line 50 "parcer.tab.cpp"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif



// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 125 "parcer.tab.cpp"


  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
     :yydebug_ (false),
      yycdebug_ (&std::cerr)
#endif
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_number_type
  parser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state))
  {
    switch (that.type_get ())
    {
      case 8: // OR
      case 9: // LEND
      case 10: // EQ
      case 11: // IN
      case 12: // OUT
        value.YY_MOVE_OR_COPY< char > (YY_MOVE (that.value));
        break;

      case 15: // ln
        value.YY_MOVE_OR_COPY< inp > (YY_MOVE (that.value));
        break;

      case 3: // STRING
      case 4: // PATH
      case 5: // SET
      case 6: // VAR
      case 7: // TIME
      case 19: // item
      case 20: // cmd
        value.YY_MOVE_OR_COPY< std::string  > (YY_MOVE (that.value));
        break;

      case 17: // fullcommand
      case 18: // args
        value.YY_MOVE_OR_COPY< std::vector <std:: string>  > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s)
  {
    switch (that.type_get ())
    {
      case 8: // OR
      case 9: // LEND
      case 10: // EQ
      case 11: // IN
      case 12: // OUT
        value.move< char > (YY_MOVE (that.value));
        break;

      case 15: // ln
        value.move< inp > (YY_MOVE (that.value));
        break;

      case 3: // STRING
      case 4: // PATH
      case 5: // SET
      case 6: // VAR
      case 7: // TIME
      case 19: // item
      case 20: // cmd
        value.move< std::string  > (YY_MOVE (that.value));
        break;

      case 17: // fullcommand
      case 18: // args
        value.move< std::vector <std:: string>  > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 8: // OR
      case 9: // LEND
      case 10: // EQ
      case 11: // IN
      case 12: // OUT
        value.move< char > (that.value);
        break;

      case 15: // ln
        value.move< inp > (that.value);
        break;

      case 3: // STRING
      case 4: // PATH
      case 5: // SET
      case 6: // VAR
      case 7: // TIME
      case 19: // item
      case 20: // cmd
        value.move< std::string  > (that.value);
        break;

      case 17: // fullcommand
      case 18: // args
        value.move< std::vector <std:: string>  > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
#if defined __GNUC__ && ! defined __clang__ && ! defined __ICC && __GNUC__ * 100 + __GNUC_MINOR__ <= 408
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
#endif
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " (";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case 8: // OR
      case 9: // LEND
      case 10: // EQ
      case 11: // IN
      case 12: // OUT
        yylhs.value.emplace< char > ();
        break;

      case 15: // ln
        yylhs.value.emplace< inp > ();
        break;

      case 3: // STRING
      case 4: // PATH
      case 5: // SET
      case 6: // VAR
      case 7: // TIME
      case 19: // item
      case 20: // cmd
        yylhs.value.emplace< std::string  > ();
        break;

      case 17: // fullcommand
      case 18: // args
        yylhs.value.emplace< std::vector <std:: string>  > ();
        break;

      default:
        break;
    }



      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2:
#line 51 "parcer.ypp"
    {yystack_[1].value.as < inp > ().flag_out = false; yystack_[1].value.as < inp > ().f_out = "no out redirections";
                if((yystack_[1].value.as < inp > ().P).size() > 0) Tubes(yystack_[1].value.as < inp > ());
                print_cwd();}
#line 592 "parcer.tab.cpp"
    break;

  case 3:
#line 54 "parcer.ypp"
    {yystack_[3].value.as < inp > ().flag_out = true; yystack_[3].value.as < inp > ().f_out = yystack_[1].value.as < std::string  > ();
                              if((yystack_[3].value.as < inp > ().P).size() > 0) Tubes(yystack_[3].value.as < inp > ());
                              print_cwd();}
#line 600 "parcer.tab.cpp"
    break;

  case 4:
#line 57 "parcer.ypp"
    {yystack_[1].value.as < inp > ().flag_out = false; yystack_[1].value.as < inp > ().f_out = "no out redirections";
              if((yystack_[1].value.as < inp > ().P).size() > 0) Tubes(yystack_[1].value.as < inp > ());
              print_cwd();}
#line 608 "parcer.tab.cpp"
    break;

  case 5:
#line 60 "parcer.ypp"
    {yystack_[1].value.as < inp > ().flag_out = false; yystack_[1].value.as < inp > ().f_out = "no out redirections";
                      if((yystack_[1].value.as < inp > ().P).size() > 0) Tubes(yystack_[1].value.as < inp > ());
                      struct rusage ru;
                      getrusage(RUSAGE_SELF, &ru);
                      std::cout << ru.ru_stime.tv_usec << " usec \n";
                      print_cwd();}
#line 619 "parcer.tab.cpp"
    break;

  case 6:
#line 66 "parcer.ypp"
    {yystack_[1].value.as < inp > ().flag_out = false; yystack_[1].value.as < inp > ().f_out = "no out redirections";
                   if((yystack_[1].value.as < inp > ().P).size() > 0) Tubes(yystack_[1].value.as < inp > ());
                   struct rusage ru;
                   getrusage(RUSAGE_SELF, &ru);
                   std::cout << ru.ru_stime.tv_usec << " usec \n";
                   print_cwd();}
#line 630 "parcer.tab.cpp"
    break;

  case 7:
#line 72 "parcer.ypp"
    {yystack_[3].value.as < inp > ().flag_out = true; yystack_[3].value.as < inp > ().f_out = yystack_[1].value.as < std::string  > ();
                          if((yystack_[3].value.as < inp > ().P).size() > 0) Tubes(yystack_[3].value.as < inp > ());
                          print_cwd();}
#line 638 "parcer.tab.cpp"
    break;

  case 8:
#line 76 "parcer.ypp"
    {(yystack_[2].value.as < inp > ().P).push_back(yystack_[0].value.as < std::vector <std:: string>  > ()); yylhs.value.as < inp > ().P = yystack_[2].value.as < inp > ().P;}
#line 644 "parcer.tab.cpp"
    break;

  case 9:
#line 77 "parcer.ypp"
    {(yylhs.value.as < inp > ().P).push_back(yystack_[0].value.as < std::vector <std:: string>  > ()); yylhs.value.as < inp > ().flag_in = false; yylhs.value.as < inp > ().f_in = "no in redirections";}
#line 650 "parcer.tab.cpp"
    break;

  case 10:
#line 78 "parcer.ypp"
    {(yylhs.value.as < inp > ().P).push_back(yystack_[2].value.as < std::vector <std:: string>  > ()); yylhs.value.as < inp > ().flag_in = true; yylhs.value.as < inp > ().f_in = yystack_[0].value.as < std::string  > ();}
#line 656 "parcer.tab.cpp"
    break;

  case 11:
#line 79 "parcer.ypp"
    {(yylhs.value.as < inp > ().P) = (yylhs.value.as < inp > ().P);}
#line 662 "parcer.tab.cpp"
    break;

  case 12:
#line 80 "parcer.ypp"
    {(yylhs.value.as < inp > ().P) = (yylhs.value.as < inp > ().P); yylhs.value.as < inp > ().flag_in = false; yylhs.value.as < inp > ().f_in = "no in redirections";}
#line 668 "parcer.tab.cpp"
    break;

  case 13:
#line 83 "parcer.ypp"
    {setenv(yystack_[2].value.as < std::string  > ().c_str(), yystack_[0].value.as < std::string  > ().c_str(), 1);}
#line 674 "parcer.tab.cpp"
    break;

  case 14:
#line 86 "parcer.ypp"
    {std::vector<std:: string>::iterator it = yystack_[0].value.as < std::vector <std:: string>  > ().begin();
                        yystack_[0].value.as < std::vector <std:: string>  > ().insert(it, yystack_[1].value.as < std::string  > ()); yylhs.value.as < std::vector <std:: string>  > () = yystack_[0].value.as < std::vector <std:: string>  > ();}
#line 681 "parcer.tab.cpp"
    break;

  case 15:
#line 88 "parcer.ypp"
    {yylhs.value.as < std::vector <std:: string>  > ().push_back(yystack_[0].value.as < std::string  > ());}
#line 687 "parcer.tab.cpp"
    break;

  case 16:
#line 90 "parcer.ypp"
    {yystack_[1].value.as < std::vector <std:: string>  > ().push_back(yystack_[0].value.as < std::string  > ()); yylhs.value.as < std::vector <std:: string>  > () = yystack_[1].value.as < std::vector <std:: string>  > ();}
#line 693 "parcer.tab.cpp"
    break;

  case 17:
#line 91 "parcer.ypp"
    {yylhs.value.as < std::vector <std:: string>  > ().push_back(yystack_[0].value.as < std::string  > ());}
#line 699 "parcer.tab.cpp"
    break;

  case 18:
#line 92 "parcer.ypp"
    {char *tmp = getenv(yystack_[0].value.as < std::string  > ().c_str());
                 if(tmp == NULL){
                     std::cerr << "variable was not seted\n";
                 }
                 else yystack_[1].value.as < std::vector <std:: string>  > ().push_back((std::string)tmp); yylhs.value.as < std::vector <std:: string>  > () =yystack_[1].value.as < std::vector <std:: string>  > ();}
#line 709 "parcer.tab.cpp"
    break;

  case 19:
#line 97 "parcer.ypp"
    {dive(yystack_[0].value.as < std::string  > (), yystack_[1].value.as < std::vector <std:: string>  > ()); yylhs.value.as < std::vector <std:: string>  > () = yystack_[1].value.as < std::vector <std:: string>  > ();}
#line 715 "parcer.tab.cpp"
    break;

  case 20:
#line 98 "parcer.ypp"
    {char *tmp = getenv(yystack_[0].value.as < std::string  > ().c_str());
           if(tmp == NULL){
               std::cerr << "variable was not seted\n";
           }
           else yylhs.value.as < std::vector <std:: string>  > ().push_back((std::string)tmp);}
#line 725 "parcer.tab.cpp"
    break;

  case 21:
#line 103 "parcer.ypp"
    {std::vector <std::string> tmp; dive(yystack_[0].value.as < std::string  > (),tmp); yylhs.value.as < std::vector <std:: string>  > () = tmp;}
#line 731 "parcer.tab.cpp"
    break;

  case 22:
#line 105 "parcer.ypp"
    {/*std::cout << " item " << $1 << "\n";*/ yylhs.value.as < std::string  > () = yystack_[0].value.as < std::string  > ();}
#line 737 "parcer.tab.cpp"
    break;

  case 23:
#line 107 "parcer.ypp"
    {/*std::cout << "cmd " << $1 << "\n"*/; yylhs.value.as < std::string  > () = yystack_[0].value.as < std::string  > ();}
#line 743 "parcer.tab.cpp"
    break;


#line 747 "parcer.tab.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yysyntax_error_ (yystack_[0].state, yyla));
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }


      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what ());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type, const symbol_type&) const
  {
    return YY_("syntax error");
  }


  const signed char parser::yypact_ninf_ = -10;

  const signed char parser::yytable_ninf_ = -1;

  const signed char
  parser::yypact_[] =
  {
       8,   -10,    -4,    23,     3,     9,   -10,     5,     1,    12,
      22,   -10,    23,    11,    23,   -10,    26,    31,   -10,   -10,
     -10,    21,   -10,    32,   -10,    24,   -10,    33,   -10,   -10,
      28,   -10,   -10,   -10,   -10,   -10,   -10,    29,   -10,   -10
  };

  const unsigned char
  parser::yydefact_[] =
  {
       0,    23,     0,     0,     0,     0,    12,     9,    15,     0,
       0,     1,     0,     0,     0,     4,     0,     0,    22,    21,
      20,    14,    17,     0,     6,     0,     2,     0,    11,     8,
       0,    10,    19,    18,    16,    13,     5,     0,     7,     3
  };

  const signed char
  parser::yypgoto_[] =
  {
     -10,   -10,    -3,    25,    27,   -10,    -9,   -10
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     4,     5,     6,     7,    21,    22,     8
  };

  const unsigned char
  parser::yytable_[] =
  {
      10,    13,     9,    11,    18,    19,     1,    20,     2,    25,
      12,     1,    34,     2,    35,     3,    17,    14,    15,    14,
      26,    16,    23,    27,    18,    32,     1,    33,     2,    30,
      14,    24,    14,    36,    31,    18,    37,    38,    39,    28,
       0,    29
  };

  const signed char
  parser::yycheck_[] =
  {
       3,     4,     6,     0,     3,     4,     3,     6,     5,    12,
       7,     3,    21,     5,    23,     7,    11,     8,     9,     8,
       9,    12,    10,    12,     3,     4,     3,     6,     5,     3,
       8,     9,     8,     9,     3,     3,     3,     9,     9,    14,
      -1,    14
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,     3,     5,     7,    14,    15,    16,    17,    20,     6,
      15,     0,     7,    15,     8,     9,    12,    11,     3,     4,
       6,    18,    19,    10,     9,    15,     9,    12,    16,    17,
       3,     3,     4,     6,    19,    19,     9,     3,     9,     9
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    13,    14,    14,    14,    14,    14,    14,    15,    15,
      15,    15,    15,    16,    17,    17,    18,    18,    18,    18,
      18,    18,    19,    20
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     3,     5,     2,     4,     3,     4,     3,     1,
       3,     3,     1,     4,     2,     1,     2,     1,     2,     2,
       1,     1,     1,     1
  };


#if YYDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "$end", "error", "$undefined", "STRING", "PATH", "SET", "VAR", "TIME",
  "OR", "LEND", "EQ", "IN", "OUT", "$accept", "ex", "ln", "setcommand",
  "fullcommand", "args", "item", "cmd", YY_NULLPTR
  };


  const unsigned char
  parser::yyrline_[] =
  {
       0,    51,    51,    54,    57,    60,    66,    72,    76,    77,
      78,    79,    80,    83,    86,    88,    90,    91,    92,    97,
      98,   103,   105,   107
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy
#line 1055 "parcer.tab.cpp"

#line 109 "parcer.ypp"


void yy::parser::error (const std::string& m)
{
  std::cerr << m << '\n';
}

void echo_exec(std::vector <std:: string> P){
    for(int i = 1; i < P.size()-1; i++){
        std::cout << P[i] << " ";
    }
    if(P.size() > 1) std::cout << P[P.size()-1] << "\n";
}

void pwd_exec(){
    char cwd[256];
    getcwd(cwd, sizeof(cwd));
    std::cout << cwd << "\n";
}

void Tubes(inp I){

    int fd_in, oldin, fd_out, oldout;
    if(I.flag_in){
        fd_in = open((I.f_in).c_str(),O_CREAT|O_RDONLY);
        if(fd_in)
        {
            oldin = dup(STDIN_FILENO);
            //close(STDIN_FILENO);
            dup2(fd_in,STDIN_FILENO);
            close(fd_in);
        }
        else
        {
            printf("Ошибка при открытии файла. \n");
        }
    }

    if(I.flag_out){
        fd_out = open((I.f_out).c_str(),O_CREAT|O_WRONLY);
        if(fd_out)
        {
            oldout = dup(STDOUT_FILENO);
            //close(STDOU_FILENO);
            dup2(fd_out,STDOUT_FILENO);
            close(fd_out);
        }
        else
        {
            printf("Ошибка при открытии файла. \n");
        }
    }
    pid_t lastp;
    std::vector <std:: vector <int> > pd((I.P).size()-1, (std::vector<int> (2,0)));
    for(int i = 0; i < pd.size(); i++) {int fd[2]; pipe(fd); pd[i][0] = fd[0]; pd[i][1] = fd[1];}
    for(int i = 0; i < (I.P).size(); i++){
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

            if((I.P)[i][0] == "echo"){
                echo_exec((I.P)[i]);
                exit(0);
            }
            if((I.P)[i][0] == "pwd"){
                pwd_exec();
                exit(0);
            }

            //std::cout << P.size() << " " << P[i][0] << " here\n";
            std::vector <char *> p;
            for (auto const &q: (I.P)[i]) {
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

    if(I.flag_in){
        dup2(oldin,STDIN_FILENO);
        close(oldin);
    }
    if(I.flag_out){
        dup2(oldout,STDOUT_FILENO);
        close(oldout);
    }
}

void print_cwd(){
    char cwd[256];
    getcwd(cwd, sizeof(cwd));
    uid_t euid = geteuid();
    if(euid == 0) std::cout << cwd << ">";
    else std::cout << cwd << "!>";
}

void dive(std::string pth, std::vector <std::string> &P){
    std::string help;
    std::vector <std::string> a;
    std::vector <std::string> answ;
    std::string dir0;
    if(pth[0] == '*'){
        char cwd[256];
        getcwd(cwd, sizeof(cwd));
        dir0 = (std::string) cwd;
    }
    int i = 0;
    for(; i <  pth.size() && pth[i] != '*' && pth[i] != '?';i++) {
        dir0 += pth[i];
        help += pth[i];
    }
    //std::cout << i <<" and our help = " << help << "\n";
    a.push_back(dir0);
    for(; i < pth.size(); i++){
        if(a.size() == 0) {
            std::cerr << "no such file or directory\n";
            return;
        }
        //std::cout << "\t" << pth[i] << " :top now: ";
        switch (pth[i]){
            case '*' :{
                //std::cout << help << "1\t";
                help = help + ".*";
                //std::cout << help << "2\t";
                break;
            }
            case '.' :{
                //std::cout << help << "3\t";
                help = help + "\\.";
                //std::cout << help << "4\t";
                break;
            }
            default :{
                help = help + pth[i];
                break;
            }
        }
        //std::cout << help << "5\n";

        std::regex rg (help.c_str());
        int counter = a.size();
        while(counter > 0){
            DIR *dir;
            dir = opendir(a[0].c_str());
            if (dir != NULL) {
                for (auto ent = readdir(dir); ent != NULL; ent = readdir(dir)){
                    std::string en = (std::string) (ent->d_name);
                    std::string hel = a[0] + (char)(47) + en;
                    if (en != "." && en != ".." && std::regex_match(hel, rg)) {
                        a.push_back(hel);
                        answ.push_back(hel);
                        std::cout <<help <<"\t" << hel << "\n";
                    }
                }
            }
            a.erase(a.begin());
            closedir(dir);
            counter--;
        }
        //std::cout<< "\t" << answ.size() << " output\n";
        for(int it = 0; it < answ.size(); it++){
            //std::cout<< "\t" << answ.size() << " output\n";
            if(!std::regex_match(answ[it], rg)) {
                answ.erase(answ.begin()+it);
                it--;
            }
        }
        std::cout<< "\t" << answ.size() << " output\n";
    }
    if(answ.size()>0) P.insert(P.end(), answ.begin(), answ.end());
}

int main(){
      print_cwd();
      yy::parser pars;
      int res = pars.parse();
      return res;
}
