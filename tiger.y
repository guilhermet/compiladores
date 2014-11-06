%{
#include <stdio.h>
#include "absyn.h"
#include "table.h"
#include "errormsg.h"

A_exp absyn_root;

void yyerror(char *s){
   EM_error(EM_tokPos, "%s", s);
}

%}


%union {
	int ival;
	char* sval;

	struct A_exp_ *A_exp;
	struct A_var_ *A_var;
	struct A_oper_ *A_oper;
	struct A_expList_ *A_expList;
//	struct A_dec_ *A_dec;
//	struct A_decList_ *A_decList;
	}

%token <sval> ID STRING
%token <ival> INT
%token COMMA COLON SEMICOLON LPAREN RPAREN LBRACK RBRACK 
%token LBRACE RBRACE DOT 
%token PLUS MINUS TIMES DIVIDE EQUAL NEQUAL LT LE GT GE
%token AND OR ASSIGN
%token ARRAY IF THEN ELSE WHILE FOR TO DO LET IN END OF 
%token BREAK NIL
%token FUNCTION VAR TYPE 
%token IMPORT PRIVATE
%type <A_exp> exp ifexp //type-id
%type <A_var> lvalue 
/*
%type <A_efieldList> recordfields fields
%type <A_Efield> field
*/
%type <A_expList> expList parametro //exps
/*
%type <A_decList> decs
%type <A_dec> dec vardec
%type <A_fundecList> fundec
%type <A_nametyList> typedecs
%type <A_namety> typedec
%type <A_ty> ty
%type <A_fieldList> tyfields comma_tyfields
%type <A_field> tyfield
%type <A_oper> op
*/


/* operadores logico */
%left OR
%left AND

/* operadores relacional */
%left EQUAL NEQUAL
%left GT LT GE LE

/* operadores */
%left PLUS MINUS
%left TIMES DIVIDE

%right THEN ELSE

%start program

%%

program: exp		    				{ absyn_root=$1;}
;

exp	: NIL                                  		{ $$=A_NilExp(EM_tokPos); }
       	| INT						{ $$=A_IntExp(EM_tokPos, $1); }
       	| STRING					{ $$=A_StringExp(EM_tokPos, $1); }
//     	| ID LBRACK exp RBRACK OF exp			{ $$=A_ArrayExp(EM_tokPos, S_symbol($1), $3, $6); }  
//     	| type-id LBRACE recordfields RBRACE		{ $$=A_RecordExp(EM_tokPos, $1, $3); }
     	| lvalue					{ $$=A_VarExp(EM_tokPos, $1); }				
//	| MINUS exp					{ $$=A_OpExp(EM_tokPos, A_IntExp(EM_tokPos, 0), A_minusOp, $2); }
//	| exp op exp					{ $$=A_OpExp(EM_tokPos, $1, $2, $3); }
//	| LPAREN exps LPAREN				{ $$=A_OpExp(EM_tokPos, $2); }
    	| ID LPAREN expList RPAREN			{ $$=A_CallExp(EM_tokPos, S_Symbol($1), $3); }
     	| lvalue ASSIGN exp				{ $$=A_AssignExp(EM_tokPos, $1, $3); }
     	| ifexp 					{ $$=$1; }
//     	| WHILE exp DO exp				{ $$=WhileExp(EM_tokPos, $2, $4); }
//     	| FOR ID ASSIGN exp TO exp DO exp		{ $$=A_ForExp(EM_tokPos, S_symbol($2), $4, $6, $8); }
//     	| BREAK						{ $$=A_BreakExp(EM_tokPos); }
//     	| LET decs IN exps END				{ $$=A_LetExp(EM_tokPos, $2, $4); }
;


ifexp	: IF exp THEN exp				{ $$=A_IfExp(EM_tokPos, $2, $4, NULL); } 
	| IF exp THEN exp ELSE exp			{ $$=A_IfExp(EM_tokPos, $2, $4, $6); }
;

lvalue 	: ID						{ $$=A_SimpleVar(EM_tokPos, S_Symbol($1));}
       	| lvalue DOT ID					{ $$=A_FieldVar(EM_tokPos, $1, S_Symbol($3)); }
       	| lvalue LBRACK exp RBRACK			{ $$=A_SubscriptVar(EM_tokPos, $1, $3); }
;
/*
exps 	: exp 						{ $$=A_ExpList($1, NULL); }
	| exp SEMICOLON exps				{ $$=A_ExpList($1, $3); }
;

recordfields:						{ $$=NULL; } 
	| fields					{ $$=$1; }
;

fields	: field						{ $$=A_EfieldList($1, NULL); } 
	| field COMMA fields				{ $$=A_EfieldList($1, $3); } 
;

field	: ID EQUAL exp					{ $$=A_Efield(S_Symbol($1), $3); }
;
*/
expList	: 						{ $$=NULL; }
	| exp parametro					{ $$=A_ExpList($1, $2);; }
;
 
parametro: 						{ $$=NULL; }
	| COMMA exp parametro				{ $$=A_ExpList($2, $3); }
;
/*
decs 	: dec						{ $$=A_DecList($1, NULL);}
	| dec decs					{ $$=A_DecList($1, $2);}
;

dec 	: vardec					{ $$=$1; }
//	| typedecs 					{ $$=A_TypeDec(EM_tokPos, $1); }
//     	| fundec 					{ $$=$1; }
;  

typedecs: typedec					{ $$=A_NametyList($1, NULL);}
	| typedec typedecs				{ $$=A_NametyList($1, $2); }
;

typedec : TYPE ID EQUAL ty				{ $$=A_Namety(S_symbol($2), $4); }
;

ty 	: type-id					{ $$=A_NameTy(EM_tokPos, $1); }
        | LBRACE tyfields RBRACE			{ $$=A_RecordTy(EM_tokPos, $2); }
        | ARRAY OF type-id				{ $$=A_ArrayTy(EM_tokPos, $3);}
;

tyfields: 						{ $$=NULL; }
	| tyfield comma_tyfields			{ $$=A_FieldList($1, $2); }	
;

tyfield	: ID COLON type-id				{ $$=A_Field(EM_tokPos, S_Symbol($1), $3); }
;

comma_tyfields:						{ $$=NULL; }
	| COMMA tyfield comma_tyfields			{ $$=A_FieldList($2, $3); }	
;

vardec 	: VAR ID COLON type-id ASSIGN exp		{ $$=A_VarDec(EM_tokPos, $2, $4, $6); }
	| VAR ID ASSIGN exp				{ $$=A_VarDec(EM_tokPos, $2, NULL, $4); }
;

fundec	: FUNCTION ID LPAREN tyfields RPAREN COLON type-id EQUAL exp	{$$=A_FunctionDec(EM_tokPos, $2, $4, $7, $9); }
	| FUNCTION ID LPAREN tyfields RPAREN EQUAL exp			{$$=A_FunctionDec(EM_tokPos, $2, $4, NULL, $7); }
;

op 	: PLUS						{ $$=A_plusOp; }
	| MINUS 					{ $$=A_minusOp; }
	| TIMES 					{ $$=A_timesOp; }
	| DIVIDE 					{ $$=A_divideOp; }
	| EQUAL 					{ $$=A_eqOp; }
	| NEQUAL 					{ $$=A_neqOp; }
	| GT 						{ $$=A_gtOp; }
	| LT 						{ $$=A_ltOp; }
	| GE 						{ $$=A_geOp; }
	| LE 						{ $$=A_leOp; }
	| AND 						{ $$=A_andOp; }
	| OR						{ $$=A_orOp; }
;

type-id : ID						{ $$=A_SimpleVar(EM_tokPos, S_Symbol($1));}
;
*/
%%

