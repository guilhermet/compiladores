%{
#include <string.h>
#include "util.h"
#include "tokens.h"
#include "errormsg.h"

int charPos=1;

int yywrap(void)
{
 charPos=1;
 return 1;
}


void adjust(void)
{
 EM_tokPos=charPos;
 charPos+=yyleng;
}

%}

%%
" "	 {adjust(); continue;}
\n	 {adjust(); EM_newline(); continue;}
","	 {adjust(); return COMMA;}


array	 {adjust(); return ARRAY;}
if	 {adjust(); return IF;}
then	 {adjust(); return THEN;}
else	 {adjust(); return ELSE;}
while	 {adjust(); return WHITE;}
to	 {adjust(); return TO;}
do	 {adjust(); return DO;}
let	 {adjust(); return LET;}
in	 {adjust(); return IN;}
end	 {adjust(); return END;}
of	 {adjust(); return OF;}
break	 {adjust(); return BREAK;}
nil	 {adjust(); return NIL;}
function {adjust(); return FUNCTION;}
var	 {adjust(); return VAR;}
type	 {adjust(); return TYPE;}
import	 {adjust(); return IMPORT;}
primitive	{adjust(); return PRIMITIVE;}
for  	 {adjust(); return FOR;}

[0-9]+	 {adjust(); yylval.ival=atoi(yytext); return INT;}
.	 {adjust(); EM_error(EM_tokPos,"illegal token");}


