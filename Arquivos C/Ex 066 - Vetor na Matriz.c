#include<stdio.h>

/*
Escreva um programa que declare einicialize uma matriz M de 4 x 5 elementos e, utilizando uma 
estrutura de repetição,armazene em um vetor V o menor elementode cada linha da matriz
*/

int main(){
	int i, j, vetorV[1][4],
		M[4][5] = 
		{ 5, 4, 2, 8, 7,
		  3, 6, 9, 1, 4,
		  0, 3, 5, 2, 9,
		  4, 9, 7, 6, 2, };
		  
	printf("------Matriz------\n");
		  
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	
	printf("\n------Vetor com Menores Numeros de cada Linha------\n");
	
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			if(i==0){
				if(j==0){
					vetorV[0][0] = M[i][j];
				}
				else if(vetorV[0][0]>M[i][j]){
					vetorV[0][0] = M[i][j];
				}
			}
			
			else if(i==1){
				if(j==0){
					vetorV[0][1] = M[i][j];
				}
				else if(vetorV[0][1]>M[i][j]){
					vetorV[0][1] = M[i][j];
				}
			}
			
			else if(i==2){
				if(j==0){
					vetorV[0][2] = M[i][j];
				}
				else if(vetorV[0][2]>M[i][j]){
					vetorV[0][2] = M[i][j];
				}
			}
			
			else if(i==3){
				if(j==0){
					vetorV[0][3] = M[i][j];
				}
				else if(vetorV[0][3]>M[i][j]){
					vetorV[0][3] = M[i][j];
				}
			}
		}
	}
		
	printf("Os menores numeros de cada linha:\n");
	for(j=0;j<4;j++){
		printf("%d ", vetorV[0][j]);
	}
}
