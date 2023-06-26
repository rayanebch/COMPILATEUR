%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "TS.h"
#include "RS.h"
#include "Quad.h"
int yylex();
int yyerror(char *);
int m=0,n=0;
int indq=0;
char* tab_char [10];
int i=0;int j=0;
extern FILE* yyin;
extern int line, colo;
int nTemp=1; char tempC[12]=""; 
char temp_branchement_if[10][10];
char tmp[20];
char tmp2[20];
char sauvOpr[20];
%}


%union {char* nom; struct {char* type;char* res;}NT;}
%token<nom>	mc_integer mc_float mc_const mc_if mc_else mc_for mc_while mc_struct <nom> idf entier reel aff pro prf add sub division mul pvg vig pts dpts acco accf ET OU NOT inf sup infegl supegl egal diff err mc_var mc_code crochero crocherf
%left add sub
%left mul division
%type<NT> expressionAr
%start S

%%
S: idf acco mc_var acco DEC accf mc_code acco list_inst accf accf {printf("***programme syntaxiquement correct**"); YYACCEPT;};


//***************************la partie déclaration variables********************************************************************
DEC: simpleDEC DEC
	|TabDEC DEC
	|ConstDEC DEC
	|STRUCTURE DEC
	|StructDEC DEC
	|
	;
//variable simple int / float 
simpleDEC:mc_integer LISTVARINT pvg   
		|mc_float LISTVARFLOAT pvg 
		; 
//déclaration tableau
TabDEC:mc_integer idf crochero entier crocherf pvg    
					 {doubleDec ($2);inserer ($2,"INTEGER");quad("BOUNDS","1",$4,""); quad("ADEC",$2,"","");}
		|mc_float idf crochero entier crocherf pvg    
					 {doubleDec ($2);inserer ($2,"FLOAT");quad("BOUNDS","1",$4,""); quad("ADEC",$2,"","");}
		;
//déclaration constant
ConstDEC:mc_const idf pvg                {doubleDec ($2);inserer ($2,"constant");}
		|mc_const idf aff entier pvg     {doubleDec ($2);inserer ($2,"constant");}
		|mc_const idf aff reel pvg       {doubleDec ($2);inserer ($2,"constant");}
		;
//déclaration d'une structure
STRUCTURE: mc_struct acco DEC accf idf pvg 
;
//déclaration de variable type struct
StructDEC:mc_struct idf LISTSTRUCT pvg 
		;
//liste des entiers
LISTVARINT: idf 		{doubleDec ($1);inserer ($1,"INTEGER");}
|idf vig  LISTVARINT	{doubleDec ($1);inserer ($1,"INTEGER");}
;
//liste des floats
LISTVARFLOAT: idf 		{doubleDec ($1);inserer ($1,"FLOAT");}
|idf vig  LISTVARFLOAT	{doubleDec ($1);inserer ($1,"FLOAT");}
;
//liste des structures 
LISTSTRUCT: idf 		{doubleDec ($1);inserer ($1,"STRUCT");}
|idf vig  LISTSTRUCT	{doubleDec ($1);inserer ($1,"STRUCT");}
|idf crochero entier crocherf {doubleDec ($1);inserer ($1,"STRUCT");}
;
//********************************************************************************************************

//******************************** partie instructions ***************************************************

list_inst : INST list_inst |
;
INST :affectation 
	|CONDITION 
	|BOUCLEFOR 
	|BOUCLEWHILE 
	;

//partie affectation
affectation:idf aff expressionAr pvg 
					{dec ($1);  if(typeIdf($1)=="constant"){
									yyerror("erreur semantique modification d'une constante!");
								}
					
					
					if (typeIdf($1)!=$3.type)
					 					yyerror("erreur semantique incompatibilite des types affectation!");
								else {
										quad ("=",$3.res,"",$1);
										  }}
			|idf pts idf aff expressionAr pvg 
					{dec ($1); dec ($3);sprintf(tmp2,"%s.%s", $1,$3);
												if(typeIdf($3)!=$5.type)
													 yyerror("erreur semantique incompatibilite des types affectation!");                						
                                					if($5.type=="entier"){
                                         				sprintf(tmp,"%d",entier);
      				                                	quad("=",tmp,"",tmp2);
														
                                					}
                                					else if($5.type=="reel"){
                                                			sprintf(tmp,"%.02f",reel);
                                      				    	quad("=",tmp,"",tmp2);  
															
                                        					}
                                        					else{
                                                               quad("=",$5.res,"",tmp2);     
                                        			}

                                				}
			
			|idf crochero idf crocherf aff expressionAr pvg 
							{
								dec($1);dec($3);
								if(typeIdf($1)!=$6.type) 
										yyerror("erreur semantique incompatibilite des types affectation!");
										else{
											char* result=strcat(strcat(strdup($1),"["),strcat($3,"]"));
											quad ("=",$6.res,"",result);
										}
							}
			|idf crochero entier crocherf aff expressionAr pvg {
								dec($1);
								if(typeIdf($1)!=$6.type) 
										yyerror("erreur semantique incompatibilite des types affectation!");
										else{
											char* result=strcat(strcat(strdup($1),"["),strcat($3,"]"));
											quad ("=",$6.res,"",result);
										}
							}
            ;
//partie expression arithmitique 
expressionAr: expressionAr add expressionAr {
								if ($1.type=="constant" || $3.type=="constant"){$$.type=$1.type; sprintf(tempC,"T%d",nTemp); nTemp++;
									$$.res=strdup(tempC); tempC[0]='\0';
									quad ("+",$1.res,$3.res,$$.res);}
								else{
								if ($1.type!=$3.type) yyerror("erreur semantique incompatibilite des types");
								else {
									$$.type=$1.type; sprintf(tempC,"T%d",nTemp); nTemp++;
									$$.res=strdup(tempC); tempC[0]='\0';
									quad ("+",$1.res,$3.res,$$.res);
									
								}
							}}
	| expressionAr sub expressionAr {
						if ($1.type=="constant" || $3.type=="constant"){$$.type=$1.type; sprintf(tempC,"T%d",nTemp); nTemp++;
									$$.res=strdup(tempC); tempC[0]='\0';
									quad ("-",$1.res,$3.res,$$.res);}
								else{
						if ($1.type!=$3.type) yyerror("erreur semantique incompatibilite des types");
						else {
							$$.type=$1.type;  sprintf(tempC,"T%d",nTemp);nTemp++;
							$$.res=strdup(tempC);tempC[0]='\0';
							quad ("-",$1.res,$3.res,$$.res);
						}
					}}
	| expressionAr division expressionAr {
						if ($1.type=="constant" || $3.type=="constant"){$$.type=$1.type; sprintf(tempC,"T%d",nTemp); nTemp++;
									$$.res=strdup(tempC); tempC[0]='\0';
									quad ("/",$1.res,$3.res,$$.res);}
								else{
						if ($1.type!=$3.type) yyerror("erreur semantique incompatibilite des types");
						else {
								$$.type=$1.type;  sprintf(tempC,"T%d",nTemp);nTemp++;
								$$.res=strdup(tempC);tempC[0]='\0';
								quad ("/",$1.res,$3.res,$$.res);
								if(strcmp($3.res,"0")==0) yyerror("erreur symantique DIVISION PAR ZERO");
						}
						
					}}
	| expressionAr mul expressionAr {
						if ($1.type=="constant" || $3.type=="constant"){$$.type=$1.type; sprintf(tempC,"T%d",nTemp); nTemp++;
									$$.res=strdup(tempC); tempC[0]='\0';
									quad ("*",$1.res,$3.res,$$.res);}
								else{
						if ($1.type!=$3.type) yyerror("erreur semantique incompatibilite des types");
						else {
								$$.type=$1.type;  sprintf(tempC,"T%d",nTemp);
								$$.res=strdup(tempC);nTemp++;tempC[0]='\0';
								quad ("*",$1.res,$3.res,$$.res);
						}
					}}
	|idf {dec ($1); $$.type=typeIdf($1);  $$.res=strdup($1);}
	|entier {$$.type="INTEGER";  $$.res=$1;}
	|reel {$$.type="FLOAT";  $$.res=$1;}
	|idf crochero entier crocherf{$$.type=typeIdf($1);char* chaine=strcat(strdup($1),"[");strcat(chaine,strdup($3)); $$.res=strcat(chaine,"]");}
    |idf crochero idf crocherf {$$.type=typeIdf($1);  char* chaine=strcat(strdup($1),"[");strcat(chaine,strdup($3)); $$.res=strcat(chaine,"]");}
	|idf pts idf  {$$.type=typeIdf($1);}
	|pro expressionAr prf {$$.type=$2.type; $$.res=$2.res;}
	;
// partie condition IF ELSE
CONDITION:IF list_inst ACCF_SIMPLE // le if tout seul 
         |IF list_inst ACCF_IF ELSE list_inst ACCF_ELSE  // le if else
		 ;

IF:mc_if pro cond prf acco { quad("BZ",temp_branchement_if[i],"temp_cond","");}
		;
ACCF_SIMPLE:accf {sprintf(temp_branchement_if[i],"%d",indq); i=i+1;}
		;		 
ELSE:mc_else acco {quad("BR",temp_branchement_if[i],"","");}
;
ACCF_IF:accf {sprintf(temp_branchement_if[i],"%d",indq+1); i=i+1;}
		;
ACCF_ELSE:accf{sprintf(temp_branchement_if[i],"%d",indq); i=i+1;}
		;		
// *****************************************************condition**********************************
cond:comparaison
	|expressionLog
	;
comparaison: expressionAr sup expressionAr {strcpy(sauvOpr,"BLE");}
			|expressionAr inf expressionAr {strcpy(sauvOpr,"BGE");}
			|expressionAr egal expressionAr {strcpy(sauvOpr,"BNE");}
			|expressionAr diff expressionAr {strcpy(sauvOpr,"BE");}
			|expressionAr supegl expressionAr {strcpy(sauvOpr,"BL");}
			|expressionAr infegl expressionAr {strcpy(sauvOpr,"BG");}
			;

expressionLog:pro comparaison prf operateurLog pro comparaison prf
		   |expressionAr operateurLog expressionAr
           |NOT expressionAr 
		   ;
operateurLog:ET
            |OU					 
			;

BOUCLEFOR: FOR list_inst ACCF1
;
//*******************************la boucle FOR**************
FOR:mc_for pro idf dpts entier dpts entier dpts idf prf acco {
                                                            quad("=",$5,"",$3);
                                                            empiler_Pile(&pile1,indq);
                                                            quad("+",$3,$7,"temp_cond");
                                                            empiler_Pile(&pile2,indq);
                                                            quad("BG",tostr(indq),"temp",$9);
                                                            }
    ;
ACCF1:accf {quad("BR",depiler_Pile(&pile1),"","");q[atoi(depiler_Pile(&pile2))].op1=tostr(indq);}
;
//***********************************la boucle while ***********************************
BOUCLEWHILE: WHILE WLS list_inst ACCF ;
WHILE: mc_while pro {empiler_Pile(&pile1,indq);} ;
WLS:   cond prf acco {
						quad("BZ",tostr(indq),"temp_cond","");
						empiler_Pile(&pile2,indq-1);
					  }
;

ACCF: accf {
			quad("BR",depiler_Pile(&pile1),"","");
    		q[atoi(depiler_Pile(&pile2))].op1=tostr(indq);
			} 
;




//**************************************************************LE MAIN ******************************************************************************
%%
int yyerror (char* msg){
    printf (" %s ligne %d  \n",msg,line,colo); exit (0);}

int main (){ 
    yyin = fopen("test_global2.txt", "r");
    yyparse ();
	afficherTS ();
	afficherQuad();
	optimiser();
	printf("---------------||LISTE QUADS APRES OPTIMISATION ||---------------\n");
    afficherQuad();
	generateAssemblyCode(q,indq,"codeObj.asm");
    fclose (yyin);
}
