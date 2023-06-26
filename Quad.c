#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Quad.h"
#include "TS.h"



/*
les fonctions des quads ligne 33
optimisation des quad ligne 84 
generation code objet 231

*/



extern int indq; //indice des quad
// fonction pour creer les quad
void quad (char* o,char*o1,char*o2,char*r)
{q[indq].opr=o;
 q[indq].op1=o1;
 q[indq].op2=o2;
 q[indq].res=r;
 indq++;
}


//fonction pour empiler daans la pile
void empiler_Pile(pile **p,int donne){
	pile *new;
	char str[10];
	new=(pile*)malloc(sizeof(pile));
	sprintf(str,"%d",donne);
	new->donnee=strdup(str);
	new->prc=*p;
	*p=new;
}
//fonction pour dépiler 
char* depiler_Pile(pile**p){
	char *res;
	pile *H;
	H=*p;
	res=strdup(H->donnee);
	*p=H->prc;
	free(H);
	return res;
}

// fonction pour afficher les quads 
void afficherQuad()
{ int i;
for (i=0;i<indq;i++)
{printf ("%d-( %s , %s , %s , %s )\n",i,q[i].opr,q[i].op1,q[i].op2,q[i].res);}
//générer un fichier TXT qui contient tous les quads de notre programme.
}
// fonction qui genere les quad pour if
void quad_if(char* c){
  quad("BZ",c,"tempcond","");
  
}
// tranformer un entier en string
char* tostr(int m){ 
    char s[15];
    sprintf(s,"%d",m);
    return strdup(s);
}


//************************************************partie optimisation***********************

//fonction pour la propagation des copies 
void OptPropCopie(quadruplet * q) //meme fonction pour propagation d'expression
{
    int i=0;
    for (i=0;i<indq;i++)
    {
        if(q[i].opr[0]=='=')
        {
            int k=0;
            for(k=i+1;k<indq;k++)
            {
                if(strcmp(q[i].op1,q[k].res)==0 || strcmp(q[i].res,q[k].res)==0)
                    break;
                if(q[k].opr[0]=='+' || q[k].opr[0]=='*' || q[k].opr[0]=='-' || q[k].opr[0]=='/' || q[k].opr[0]=='^' )
                {
                    if(strcmp(q[i].res,q[k].op1)==0)
                    {
                        q[k].op1=strdup(q[i].op1);
                        q[i].opr=strdup("");
                        q[i].op1=strdup("");
                        q[i].op2=strdup("");
                        q[i].res=strdup("");
                    }
                    else if(strcmp(q[i].res,q[k].op2)==0)
                    {
                        q[k].op2=strdup(q[i].op1);
                        q[i].opr=strdup("");
                        q[i].op1=strdup("");
                        q[i].op2=strdup("");
                        q[i].res=strdup("");
                    }
                }
            }
        }
    }
}
//fonction simplifiaction algébrique
void OptSimplifAlg(quadruplet *q)
{
    int i=0;
    for (i=0;i<indq;i++)
    {
        if(q[i].opr[0]=='*') //exemple A*2 ==> A+A
        {
            if(q[i].op1[0]=='2') // cas 2*A ==> (+,A,A,X)
            {
                q[i].opr=strdup("+");
                q[i].op1=strdup(q[i].op2);
                q[i].op2=strdup(q[i].op2);
            }
            else if (q[i].op2[0]=='2') // cas A*2 ==> tweli (+,A,A,X)
            {
                q[i].opr=strdup("+");
                q[i].op1=strdup(q[i].op1);
                q[i].op2=strdup(q[i].op1);
            }
        }
        //Calcul inutile
        if(q[i].opr[0]=='+'){ // x=A+0 ==> (+,A,0,T1),(=,T1,,B)
                    if(strcmp(q[i].op1,"0")==0 ){     // cas ou 0 est dans le 2eme champs des quads(op1)==>(+,0,A,T1) 
                    int k=0;
                    for(k=i+1;k<indq;k++)
                    {   if(q[k].opr[0]=='=' && strcmp(q[i].res,q[k].op1)==0){ //(=,T1,,B) ==> (=,A,,B)
                        q[k].op1=strdup(q[i].op2);
                        q[i].opr=strdup("");    //supprime loperation inutile 
                        q[i].op1=strdup("");
                        q[i].op2=strdup("");
                        q[i].res=strdup("");
                        }
                    }
                }
        else if(strcmp(q[i].op2,"0")==0 ){ // ccas ou 0 est dans le 3eme champs des quads(op2)(+,A,0,T1)
                    int k=0;
                    for(k=i+1;k<indq;k++)
                    {   if(q[k].opr[0]=='=' && strcmp(q[i].res,q[k].op1)==0){ //(=,T1,,B) ==> (=,A,,B)
                        q[k].op1=strdup(q[i].op1);
                        q[i].opr=strdup("");    //supprime loperation inutile 
                        q[i].op1=strdup("");
                        q[i].op2=strdup("");
                        q[i].res=strdup("");
                        }
                    }
                }
        }

            
        // cas : x=a-a ==> (-,A,A,T1);(=,T1,,X)
        if(q[i].opr[0]=='-'){ 
            if(strcmp(q[i].op1,q[i].op2)==0){ //comparer si op1 && op2 identiques
                 int k=0;
                 for(k=i+1;k<indq;k++)
            {       if(q[k].opr[0]=='=' && strcmp(q[i].res,q[k].op1)==0){ //comparer si T1 existe dans l'affectation 
                        q[k].op1=strdup("0");    // (=,T1,,X) ==> (=,0,,X)
                        q[i].opr=strdup("");    //supprime loperation inutile du moins
                        q[i].op1=strdup("");
                        q[i].op2=strdup("");
                        q[i].res=strdup("");
                        
            }
                           
           
                
            }
        }
    }
}
}
//fonction des expressions redondantes 
void OptExpRedondantes(quadruplet * q)
{
    int i=0;
    for (i=0;i<indq;i++)
    {
        if(q[i].opr[0]=='+' || q[i].opr[0]=='-' || q[i].opr[0]=='*' || q[i].opr[0]=='/') //verifier tout les quads arithmetiques
        {
            int k=0;
            for(k=i+1;k<indq;k++)
            {
            if(strcmp(q[i].opr,q[k].opr)==0 && strcmp(q[i].op1,q[k].op1)==0 && strcmp(q[i].op2,q[k].op2)==0)// vérifier si les champs opr,op1,op2 sont identiques dans les 2 quads
                {   
                        int jz;
                         for(jz=k+1;jz<indq;jz++){
                         if(q[jz].opr[0] == '=' && strcmp(q[k].res,q[jz].op1)==0){
                                q[jz].op1=strdup(q[i].res); //suprrimer le quad inutile
                                q[k].opr=strdup("");
                                q[k].op1=strdup("");
                                q[k].op2=strdup("");
                                q[k].res=strdup("");
                                }
                         }
                }
            }
        }
    }
}
// la fonction pour optimiser 
void optimiser(){ // fonction qui appel toutes les fonctions d'optimisations
    OptSimplifAlg(q);
    OptPropCopie(q);
    OptExpRedondantes(q);    
    int i=0;
    for(i=0;i<indq-1;i++)
    {
        if(strcmp(q[i].opr,"")==0)
        {
            int j = 0;
            for(j=i;j<indq-1;j++)
            {
                q[j].opr=strdup(q[j+1].opr);
                q[j].op1=strdup(q[j+1].op1);
                q[j].op2=strdup(q[j+1].op2);
                q[j].res=strdup(q[j+1].res);
            }
            indq--;
        }
    }
}




//************************************************generation code objet *************************************************



// fonction pour générer le fichier .asm qui contient le code objet de notre exemple.
void generateAssemblyCode(quadruplet* quads, int numq, const char* fileName) { 
      FILE* file = fopen(fileName, "w");
      if (file == NULL) {
          printf("Erreur lors de l'ouverture du fichier.\n");
          return;
      }
 // En-tête du programme assembleur
fprintf(file,"TITLE : TP.asm\n\n"); 
fprintf(file,"DATA SEGMENT\n");
for (int i = 0; i < taille; i++)
    {
        if (TS[i].nom != NULL && TS[i].type != NULL)
        {
            for (int j = 0; j < numq; j++)
            {
                if (strcmp(TS[i].nom, quads[j].op1) == 0 || strcmp(TS[i].nom, quads[j].op2) == 0 || strcmp(TS[i].nom, quads[j].res) == 0)
                {
                    if (strcmp(TS[i].type, "INTEGER") == 0)
                    {
                        fprintf(file, "%s\tDB ?\n", TS[i].nom);
                    }
                    else
                    {
                        fprintf(file, "%s\tDW ?\n", TS[i].nom);
                    }
                    break;
                }
            }
        }
    }

fprintf(file,"DATA ENDS\n");
fprintf(file,"CODE SEGMENT\n");
fprintf(file,"MAIN\n");
fprintf(file,"ASSUME CS: CODE, DS: DATA, SS: PILE\n");
fprintf(file,"\t MOV AX,DATA\n");
fprintf(file,"\t MOV DS,AX\n\n");
  
      for (int i = 0; i < numq; i++) {
            quadruplet* quad = &quads[i];

            // Génération du code machine pour chaque quadruplet
            fprintf(file, "; Quadruplet %d\n", i);
            fprintf(file, "MOV AX, %s\n", q[i].op1);
            if(strcmp(q[i].op2,"vide")!=0){
                fprintf(file, "MOV BX, %s\n", q[i].op2);
            }
          if (strcmp(q[i].opr, "+") == 0) {
            fprintf(file, "ADD AX, BX\n");
          } else if (strcmp(q[i].opr, "-") == 0) {
            fprintf(file, "SUB AX, BX\n");
          } else if (strcmp(q[i].opr, "*") == 0) {
            fprintf(file, "MUL BX\n");
          } else if (strcmp(q[i].opr, "/") == 0) {
            fprintf(file, "DIV BX\n");}
          else if (strcmp(quad->opr, "BE") == 0) {
              fprintf(file, "CMP %s, %s\n", q->res, q->op1);
              fprintf(file, "JE %s\n", q->op1);
          } else if (strcmp(quad->opr, "BR") == 0) {
              fprintf(file, "JMP %s\n", q->op1);
          }else if (strcmp(quad->opr, "BLE") == 0) {
             fprintf(file, "CMP %s, %s\n",  q->res, q->op1);
              fprintf(file, "JLE %s\n", q->op1);
          }else if (strcmp(quad->opr, "BL") == 0) {
            fprintf(file, "CMP %s, %s\n",  q->res, q->op1);
              fprintf(file, "JL %s\n", q->op1);
          }else if (strcmp(quad->opr, "BGE") == 0) {
            fprintf(file, "CMP %s, %s\n",  q->res, q->op1);
              fprintf(file, "JGE %s\n", q->op1);
          }else if (strcmp(quad->opr, "BG") == 0) {
            fprintf(file, "CMP %s, %s\n",  q->res, q->op1);
              fprintf(file, "JG %s\n", q->op1);
          }

      fprintf(file, "MOV %s, AX\n", q[i].res);
    fprintf(file, "\n");
  }

  // Fin du programme assembleur
  fprintf(file, "MOV AH, 4Ch\n");
  fprintf(file, "INT 21h\n");
  fprintf(file, "MAIN ENDS\n");
  fprintf(file, "END MAIN\n");

      fclose(file);
  }


