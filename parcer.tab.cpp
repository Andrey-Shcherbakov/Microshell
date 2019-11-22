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
#line 21 "parcer.ypp"

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
      case 4: // OR
      case 5: // LEND
        value.YY_MOVE_OR_COPY< char > (YY_MOVE (that.value));
        break;

      case 3: // STRING
      case 11: // item
      case 12: // cmd
        value.YY_MOVE_OR_COPY< std::string  > (YY_MOVE (that.value));
        break;

      case 9: // fullcommand
      case 10: // args
        value.YY_MOVE_OR_COPY< std::vector <std:: string>  > (YY_MOVE (that.value));
        break;

      case 8: // ln
        value.YY_MOVE_OR_COPY< std::vector <std::vector <std:: string> >  > (YY_MOVE (that.value));
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
      case 4: // OR
      case 5: // LEND
        value.move< char > (YY_MOVE (that.value));
        break;

      case 3: // STRING
      case 11: // item
      case 12: // cmd
        value.move< std::string  > (YY_MOVE (that.value));
        break;

      case 9: // fullcommand
      case 10: // args
        value.move< std::vector <std:: string>  > (YY_MOVE (that.value));
        break;

      case 8: // ln
        value.move< std::vector <std::vector <std:: string> >  > (YY_MOVE (that.value));
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
      case 4: // OR
      case 5: // LEND
        value.move< char > (that.value);
        break;

      case 3: // STRING
      case 11: // item
      case 12: // cmd
        value.move< std::string  > (that.value);
        break;

      case 9: // fullcommand
      case 10: // args
        value.move< std::vector <std:: string>  > (that.value);
        break;

      case 8: // ln
        value.move< std::vector <std::vector <std:: string> >  > (that.value);
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
      case 4: // OR
      case 5: // LEND
        yylhs.value.emplace< char > ();
        break;

      case 3: // STRING
      case 11: // item
      case 12: // cmd
        yylhs.value.emplace< std::string  > ();
        break;

      case 9: // fullcommand
      case 10: // args
        yylhs.value.emplace< std::vector <std:: string>  > ();
        break;

      case 8: // ln
        yylhs.value.emplace< std::vector <std::vector <std:: string> >  > ();
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
#line 34 "parcer.ypp"
    {Tubes(yystack_[1].value.as < std::vector <std::vector <std:: string> >  > ()); print_cwd();}
#line 562 "parcer.tab.cpp"
    break;

  case 3:
#line 35 "parcer.ypp"
    {Tubes(yystack_[1].value.as < std::vector <std::vector <std:: string> >  > ()); print_cwd();}
#line 568 "parcer.tab.cpp"
    break;

  case 4:
#line 37 "parcer.ypp"
    {yystack_[2].value.as < std::vector <std::vector <std:: string> >  > ().push_back(yystack_[0].value.as < std::vector <std:: string>  > ()); yylhs.value.as < std::vector <std::vector <std:: string> >  > () = yystack_[2].value.as < std::vector <std::vector <std:: string> >  > ();}
#line 574 "parcer.tab.cpp"
    break;

  case 5:
#line 38 "parcer.ypp"
    {yylhs.value.as < std::vector <std::vector <std:: string> >  > ().push_back(yystack_[0].value.as < std::vector <std:: string>  > ()); }
#line 580 "parcer.tab.cpp"
    break;

  case 6:
#line 40 "parcer.ypp"
    {std::vector<std:: string>::iterator it = yystack_[0].value.as < std::vector <std:: string>  > ().begin();
                        yystack_[0].value.as < std::vector <std:: string>  > ().insert(it, yystack_[1].value.as < std::string  > ()); yylhs.value.as < std::vector <std:: string>  > () = yystack_[0].value.as < std::vector <std:: string>  > ();}
#line 587 "parcer.tab.cpp"
    break;

  case 7:
#line 42 "parcer.ypp"
    {yylhs.value.as < std::vector <std:: string>  > ().push_back(yystack_[0].value.as < std::string  > ());}
#line 593 "parcer.tab.cpp"
    break;

  case 8:
#line 44 "parcer.ypp"
    {yystack_[1].value.as < std::vector <std:: string>  > ().push_back(yystack_[0].value.as < std::string  > ()); yylhs.value.as < std::vector <std:: string>  > () = yystack_[1].value.as < std::vector <std:: string>  > ();}
#line 599 "parcer.tab.cpp"
    break;

  case 9:
#line 45 "parcer.ypp"
    {yylhs.value.as < std::vector <std:: string>  > ().push_back(yystack_[0].value.as < std::string  > ());}
#line 605 "parcer.tab.cpp"
    break;

  case 10:
#line 47 "parcer.ypp"
    {/*std::cout << " item " << $1 << "\n";*/ yylhs.value.as < std::string  > () = yystack_[0].value.as < std::string  > ();}
#line 611 "parcer.tab.cpp"
    break;

  case 11:
#line 49 "parcer.ypp"
    {/*std::cout << "cmd " << $1 << "\n"*/; yylhs.value.as < std::string  > () = yystack_[0].value.as < std::string  > ();}
#line 617 "parcer.tab.cpp"
    break;


#line 621 "parcer.tab.cpp"

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


  const signed char parser::yypact_ninf_ = -4;

  const signed char parser::yytable_ninf_ = -1;

  const signed char
  parser::yypact_[] =
  {
       4,    -4,     0,    -3,    -4,     5,    -4,     1,     4,    -4,
      -4,     5,    -4,    -4,    -4,    -4
  };

  const unsigned char
  parser::yydefact_[] =
  {
       0,    11,     0,     0,     5,     7,     1,     0,     0,     3,
      10,     6,     9,     2,     4,     8
  };

  const signed char
  parser::yypgoto_[] =
  {
      -4,    -4,     2,     3,    -4,    -2,    -4
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     2,     3,     4,    11,    12,     5
  };

  const unsigned char
  parser::yytable_[] =
  {
       6,     8,     9,     1,     7,     8,    13,     1,    10,    15,
       0,    14
  };

  const signed char
  parser::yycheck_[] =
  {
       0,     4,     5,     3,     2,     4,     5,     3,     3,    11,
      -1,     8
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,     3,     7,     8,     9,    12,     0,     8,     4,     5,
       3,    10,    11,     5,     9,    11
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,     6,     7,     7,     8,     8,     9,     9,    10,    10,
      11,    12
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     3,     2,     3,     1,     2,     1,     2,     1,
       1,     1
  };


#if YYDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "$end", "error", "$undefined", "STRING", "OR", "LEND", "$accept", "ex",
  "ln", "fullcommand", "args", "item", "cmd", YY_NULLPTR
  };


  const unsigned char
  parser::yyrline_[] =
  {
       0,    34,    34,    35,    37,    38,    40,    42,    44,    45,
      47,    49
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
#line 913 "parcer.tab.cpp"

#line 51 "parcer.ypp"


void yy::parser::error (const std::string& m)
{
  std::cerr << m << '\n';
}

void Tubes(std::vector <std::vector <std:: string> > &P){

    /*for(int i = 0; i < P.size(); i++){
        std:: cout << i << " :command num\n";
        for(int j = 0; j < P[i].size(); j ++)
            std:: cout << "my args:: " << P[i][j] << "\n";
    }*/

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

void print_cwd(){
    char cwd[256];
    getcwd(cwd, sizeof(cwd));
    uid_t euid = geteuid();
    if(euid == 0) std::cout << cwd << ">";
    else std::cout << cwd << "!>";
}

int main(){
      print_cwd();
      yy::parser pars;
      int res = pars.parse();
      return res;
}
