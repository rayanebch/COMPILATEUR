#include <stdio.h>
#include <string.h>
#include "TS.h"
#include "RS.h"

int yyerror (char*);

void doubleDec (char* el)
{  
if (recherche(el)!=-1){yyerror(strdup("erreur semantique double declaration d'un IDF \n"));}

}

void dec (char * el)
{ 
if (recherche(el)==-1){yyerror(strdup("erreur semantique IDF  non declare \n"));}

}


