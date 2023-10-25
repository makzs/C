#include<stdio.h>

/*
Escreva um programa que declare e inicialize duas matrizes (A e B) de 2 linhas e 3 colunas e,
utilizando uma estrutura de repetição, realize a troca dos elementos destas matrizes.
*/

int main(){
	int i, j,
	MatrizA[2][3] =
	{10, 20, 30,
	40, 50, 60 },
	MatrizB[2][3] =
	{1, 2, 3,
	4, 5, 6 },
	MatrizBackup[2][3];
	
	printf("Matriz A: \n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ", MatrizA[i][j]);
		}
	}
	
	printf("\nMatriz B: \n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ", MatrizB[i][j]);		
		}
	}
	
	printf("\n\nTrocando A e B de lugar...\n\n");
	sleep(2);
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			MatrizBackup[i][j] = MatrizA[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			MatrizA[i][j] = MatrizB[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			MatrizB[i][j] = MatrizBackup[i][j];
		}
	}
	
	printf("Matriz A: \n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ", MatrizA[i][j]);
		}
	}
	
	printf("\nMatriz B: \n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ", MatrizB[i][j]);
		}
	}
}
