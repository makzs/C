#include<stdio.h>

/*
Escreva 4 programas que declarem e inicializem uma matriz M de 4 x 4 elementos e, 
utilizem uma estrutura de repetição, para apresentar na tela a soma dos elementos 
marcados com x, para cada matriz.
   1         2         3         4
x x . .   . . . .   x . . .   . . . x
x x . .   . . . .   x x . .   . . x x
. . . .   . . x x   x x x .   . x x x
. . . .   . . x x   x x x x   x x x x

*/

/* 1
int main(){
	int m [4] [4] =
	{1, 2, 3, 4, 
	 5, 6, 7, 8,
	 9, 10, 11, 12,
	 13, 14, 15, 16}, 
	i, j, cont;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==0){
				if(j==0 || j==1){
					cont = cont + m [i] [j];
				}
			}
			else if(i==1){
				if(j==0 || j==1){
					cont = cont + m [i] [j];
				}
			}
		}
	}
	
	printf("A soma dos valores dos elementos da primeira indicacao e: %d", cont);
} */

/* 2
int main(){
	int m [4] [4] =
	{1, 2, 3, 4, 
	 5, 6, 7, 8,
	 9, 10, 11, 12,
	 13, 14, 15, 16}, 
	i, j, cont;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==2){
				if(j==2 || j==3){
					cont = cont + m [i] [j];
				}
			}
			else if(i==3){
				if(j==2 || j==3){
					cont = cont + m [i] [j];
				}
			}
		}
	}
	
	printf("A soma dos valores dos elementos da primeira indicacao e: %d", cont);
}
*/

/* 3
int main(){
	int m [4] [4] =
	{1, 2, 3, 4, 
	 5, 6, 7, 8,
	 9, 10, 11, 12,
	 13, 14, 15, 16}, 
	i, j, cont;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==0){
				if(j==0){
					cont = cont + m [i] [j];
				}
			}
			else if(i==1){
				if(j==0 || j==1){
					cont = cont + m [i] [j];
				}
			}
			else if(i==2){
				if(j==0 || j==1 || j==2){
					cont = cont + m [i] [j];
				}
			}
			else if(i==3){
					cont = cont + m [i] [j];
			}
		}
	}
	
	printf("A soma dos valores dos elementos da primeira indicacao e: %d", cont);
}
*/

int main(){
	int m [4] [4] =
	{1, 2, 3, 4, 
	 5, 6, 7, 8,
	 9, 10, 11, 12,
	 13, 14, 15, 16}, 
	i, j, cont;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==0){
				if(j==3){
					cont = cont + m [i] [j];
				}
			}
			else if(i==1){
				if(j==2 || j==3){
					cont = cont + m [i] [j];
				}
			}
			else if(i==2){
				if(j==1 || j==2 || j==3){
					cont = cont + m [i] [j];
				}
			}
			else if(i==3){
					cont = cont + m [i] [j];
			}
		}
	}
	
	printf("A soma dos valores dos elementos da primeira indicacao e: %d", cont);
}
