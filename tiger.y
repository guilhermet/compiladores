%{
#include <stdio.h>
#include "errormsg.h"

//A_exp absyn_root;

void yyerror(char *s){
   EM_error(EM_tokPos, "%s", s);
}

%}


%union {
	int ival;
	char* sval;
	}

%token <sval> ID STRING
%token <ival> INT
%token 
  COMMA COLON SEMICOLON LPAREN RPAREN LBRACK RBRACK 
  LBRACE RBRACE DOT 
  PLUS MINUS TIMES DIVIDE EQUAL NEQUAL LT LE GT GE
  AND OR ASSIGN
  ARRAY IF THEN ELSE WHILE FOR TO DO LET IN END OF 
  BREAK NIL
  FUNCTION VAR TYPE 
  IMPORT PRIVATE

%type <exp> exp

%left GE LE EQUAL NEQUAL LT GT
%left PLUS MINUS
%left TIMES DIVIDE

%start program

%%

program:	  exp    {absyn_root=$1;}
		| decs
;

//exp:   ID         {$$=A_VarExp(EM_tokPos,A_SimpleVar(EM_tokPos,S_Symbol($1)));}

exp:
         NIL                                    { printf("Nil"); }  
       | INT
       | STRING
       | ID '[' exp ']' "of" exp
       | ID '{''[' ID ':' exp , id = exp } ] }
//       | new type-id
       | lvalue
       | ID ( [ exp { , exp }] )
       | lvalue . id ( [ exp { , exp }] )
       | - exp
       | exp op exp
       | '(' exps ')'
       | lvalue ASSIGN exp
       | if exp then exp [else exp]
       | while exp do exp
       | for id := exp to exp do exp
       | break
       | let decs in exps end
;
lvalue :
	 ID
       | lvalue '.' ID
       | lvalue '[' exp ']'
;

exps : [ exp { ; exp } ]
//exp:   ID         { @1.first_line; }
;
op : PLUS | MINUS | TIMES | DIVIDE | EQUAL | NEQUAL | GT | LT | GE | LE | AND | OR

%%

