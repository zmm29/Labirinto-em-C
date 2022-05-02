#include <stdio.h>
#include "pilhaEncadeada.h"
#include <stdlib.h>
#define MAX 15

void cria(char l[MAX][MAX]){
     int i,j,x,y;
     srand(time(NULL));
     for(i=0;i<MAX;i++)
        for(j=0;j<MAX;j++){
          if((rand()%5)==1)
             l[i][j]='|';
             else
              l[i][j]='.';
          }
     for(i=0;i<MAX;i++){
           l[0][i]='*';
           l[MAX-1][i]='*';
           l[i][0]='*';
           l[i][MAX-1]='*';
           }// fim for
        x=  rand() % MAX-1;
        y=  rand() % MAX-1;
        l[x][y]='Q';
     }// fim funcao cria
     
void mostraLabirinto(char mat[MAX][MAX],int linha,int col){
    int i,j;
     for ( i = 0; i < linha; i++)
    {
     printf("\n");
          for ( j = 0; j < col; j++)
			printf (" %c ",mat[i][j] );
     	}

     } // fim funcao
     
 int funcaoSuperMouse(char lab[MAX][MAX],int i, int j){
     tpilha p1;
     inicializa (&p1);
     tdado pos;
     do{
     	lab[i][j] = 'v';
     	if(lab[i][j+1]=='.')
     	{
     		j++;//vai pra proxx
		 }//fim if j+1
		 //else if baiso i+1
		 //else if esq j-1
		 //else if cima i-1
		 // 	se pilha nao for vazia
		 //		lab[i][j] = 'x'
		 		//post = pop(p1)
		 		//i=pos.i
		 		//j=pos.j
		 	//senao
		 	//imposivel
		 	//retun 0;
     	Sleep(300);
     	system("cls");
     	mostraLabirinto(lab, MAX,MAX); 
	 }while(1);//enquanto nao ahar o queijo

 }// fim funcao



int main(){
    char labirinto[MAX][MAX];
    int x,y;
    cria(labirinto);
    mostraLabirinto(labirinto,MAX,MAX);
    printf("\nEntre com a posicao inicial(linha):");
    scanf("%d",&x);
    printf("\nEntre com a posicao inicial(coluna):");
    scanf("%d",&y);
    funcaoSuperMouse(labirinto,x,y);
    getch();
    }
