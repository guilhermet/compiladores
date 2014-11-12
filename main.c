#include <stdio.h>
#include <stdlib.h>
#include "util.h"
#include "symbol.h"
#include "absyn.h"
#include "errormsg.h"
#include "parse.h"
#include "prabsyn.h"

int main(int argc, char **argv){
   A_exp prog;
   if (argc != 2) {
      fprintf(stderr, "Usage: %s filename\n", argv[0]);
      exit(1);
   }
   /* yydebug = 1; */

   if (!(prog = parse(argv[1])))
      exit(1);
   //esc_find_escape(prog);
   printf("\n arvore gerada -> \n\n");
   pr_exp(stdout, prog, 3);
   printf("\n\n");

   analizador_semantico(prog);

   return 0;
}
