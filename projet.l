%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "projet.tab.h"

extern YYSTYPE yylval;
int line=1,colo=1;
	
//redéfinition de la fonction atoi pour pouvoir délimiter l'intervalle des nombres entiers.
int atoi_red(char *t){
    int b; int r; char *y;
    //printf("\n le %c \n",t[0]);
    if (t[0]=='('){
	    printf(" %c",t[0]);
        for(b=0;b<strlen(t);b++){
		   
            t[b]=t[b+1];
                 r=atoi(t);}
    }
	else{
        r=atoi(t);
		}
    return(r);}	
%}

%option noyywrap

chiffre[0-9]
lettre[a-zA-Z]
chiffreSigne "("[+-]?([1-9][0-9]*|0)")"
chiffreReelSigne "("[+-]?([0-9][0-9]*"."[0-9]*|0)")"
IDF{lettre}({lettre}|{chiffre})*
integer({chiffre}+|{chiffreSigne})
reel ({chiffreReelSigne}|({chiffre}+"."{chiffre}+))
commentaire "%%".*$




%%
"INTEGER"	 		{colo+=yyleng; yylval.nom = strdup(yytext);return mc_integer;}
"FLOAT" 		{colo+=yyleng; yylval.nom = strdup(yytext);return mc_float;}
"CONST" 		{colo+=yyleng; yylval.nom = strdup(yytext);return mc_const;}
"IF" 			{colo+=yyleng; yylval.nom = strdup(yytext);return mc_if;}
"ELSE"			{colo+=yyleng; yylval.nom = strdup(yytext);return mc_else;}
"FOR"			{colo+=yyleng; yylval.nom = strdup(yytext);return mc_for;}
"WHILE"			{colo+=yyleng; yylval.nom = strdup(yytext);return mc_while;}
"STRUCT"		{colo+=yyleng; yylval.nom = strdup(yytext);return mc_struct;}
"VAR"			{colo+=yyleng; yylval.nom = strdup(yytext);return mc_var;}
"CODE"			{colo+=yyleng; yylval.nom = strdup(yytext);return mc_code;}


{IDF} 			{colo+=yyleng; yylval.nom = strdup(yytext);  
					return idf;
					if (yyleng>8)
                    printf ("Erreur Lexical: IDF trop long a la ligne  %d a la colonne %d \n ",line,colo);}
{integer} 		{colo+=yyleng; 
					if ((atoi_red(yytext)<-32768 )||(atoi_red(yytext)>32767)){
							printf("%s : INTEGER  n'appartient pas a [-32768,32767] dans la ligne %d et colonne %d \n",yytext,line,colo);}
							else{ 
								yylval.nom = strdup(yytext);}return entier;}
{reel} 			{colo+=yyleng; yylval.nom = strdup(yytext);return reel;}



"=" {colo+=yyleng; return aff;}
"(" {colo+=yyleng; return pro;}
")" {colo+=yyleng; return prf;}
"+" {colo+=yyleng; return add;}
"-" {colo+=yyleng; return sub;}
"/" {colo+=yyleng; return division;}
"*" {colo+=yyleng; return mul;}
";" {colo+=yyleng; return pvg;}
"," {colo+=yyleng; return vig;}
"." {colo+=yyleng; return pts;}
":" {colo+=yyleng; return dpts;}
"{" {colo+=yyleng; return acco;}
"}" {colo+=yyleng; return accf;}
"&&" {colo+=yyleng; return ET;}
"||" {colo+=yyleng; return OU;}
"!" {colo+=yyleng;  return NOT;}
"<" {colo+=yyleng;  return inf;}
">" {colo+=yyleng;  return sup;}
"<=" {colo+=yyleng; return infegl;}
">=" {colo+=yyleng; return supegl;}
"==" {colo+=yyleng; return egal;}
"!=" {colo+=yyleng; return diff;}
"[" {colo+=yyleng; return crochero;}
"]" {colo+=yyleng; return crocherf;}

{commentaire}
[ \t]       colo+=yyleng;
\n        { colo=1; line++;}
. { printf ("Entite lexicale non reconnue a ligne %d a la colonne %d  l entite %s \n", line, colo,yytext); return err; }
%%
