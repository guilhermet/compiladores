/* scanner for a toy Pascal-like language */
  
%{
/* need this for the call to atof() below */
#include <math.h>

int   contadorComentario = 0;
char* string = "";
int   linha  = 1;
int   coluna = 1;

void adjust();

%}
  
%x IN_STRING
%x IN_COMMENT
   
DIGIT    [0-9]
VARIAVEL [a-zA-Z][a-zA-Z0-9_]*
INTEGER  [0-9]+
    
%%

<INITIAL>

","  { adjust(); printf("COMMA \n"     ); }
":"  { adjust(); printf("COLON \n"     ); }
";"  { adjust(); printf("SEMICOLON \n" ); }
"("  { adjust(); printf("LPAREN \n"    ); }
")"  { adjust(); printf("RPAREN \n"    ); }
"["  { adjust(); printf("LBRACK \n"    ); }
"]"  { adjust(); printf("RBRACK \n"    ); }
"{"  { adjust(); printf("LBRACE \n"    ); }
"}"  { adjust(); printf("RBRACE \n"    ); }
"."  { adjust(); printf("DOT \n"       ); }
"+"  { adjust(); printf("PLUS \n"      ); }
"-"  { adjust(); printf("MINUS \n"     ); }
"*"  { adjust(); printf("TIMES \n"     ); }
"/"  { adjust(); printf("DIVIDE \n"    ); }
"="  { adjust(); printf("EQUAL \n"     ); }
"<>" { adjust(); printf("NEQUAL \n"    ); }
"<"  { adjust(); printf("LT \n"        ); }
"<=" { adjust(); printf("LE \n"        ); }
">"  { adjust(); printf("GT \n"        ); }
">=" { adjust(); printf("GE \n"        ); }
"&"  { adjust(); printf("AND \n"       ); }
"|"  { adjust(); printf("OR \n"        ); }
":=" { adjust(); printf("ASSIGN \n"    ); }

array     { adjust(); printf("array \n"    ); }
if        { adjust(); printf("if \n"       ); }
then      { adjust(); printf("then \n"     ); }
else      { adjust(); printf("else \n"     ); }
while     { adjust(); printf("while \n"    ); }
for       { adjust(); printf("for \n"      ); }
to        { adjust(); printf("to \n"       ); }
do        { adjust(); printf("do \n"       ); }
let       { adjust(); printf("let \n"      ); }
in        { adjust(); printf("in \n"       ); }
end       { adjust(); printf("end \n"      ); }
of        { adjust(); printf("of \n"       ); }
break     { adjust(); printf("break \n"    ); }
nil       { adjust(); printf("nil \n"      ); }
function  { adjust(); printf("function \n" ); }
var       { adjust(); printf("var \n"      ); }
type      { adjust(); printf("type \n"     ); }
import    { adjust(); printf("import \n"   ); }
primitive { adjust(); printf("private \n"  ); }

{VARIAVEL}  { adjust(); printf( "identifier " ); }
     
{DIGIT}+    { adjust(); printf( "integer "    ); }

"/*" BEGIN(IN_COMMENT); contadorComentario++; 

<IN_COMMENT>{
   "/*" { contadorComentario++; }
   .    {}
   "*/" { if (--contadorComentario == 0) { printf("comentario "); BEGIN(INITIAL); } }    
}

"\"" BEGIN(IN_STRING);

<IN_STRING>{
   "\"" { printf( "String") ; BEGIN(INITIAL); }	
   .    {}

}
   
[ \t\n]+ { adjust(); }        /* eat up whitespace */
     
.           printf( "Unrecognized character " );

%%
     
int yywrap() {}

void adjust(){
   
   if (strcmp( yytext, "\n" ) == 0 ) {
      coluna = 1;
      linha++;
   }else{
      coluna += yyleng;
   }
   printf("%d %d ", linha, coluna);
   
}