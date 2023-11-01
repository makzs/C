#include<stdio.h>

/*
Escreva uma função que retorne a soma dos elementos de uma matriz 2 x 3.
*/

/* Prototipo de Funções */
int somaMatriz();
int main();

/* Variaveis Globais */
int matriz[2][3] = {20, 30, 40, 
					10, 80, 20}; 

/* Declaração de Funções */
int somaMatriz(){
	int i, j, 
		soma = 0;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			soma += matriz[i][j];	
		}
	}
	
	printf("%d", soma);
	return soma;
}

int main(){
	printf("A soma dos valores de uma matriz contendo: \n");
	printf("20, 30, 40,\n");
	printf("10, 80, 20.\n");
	printf("E igual a: ");
	somaMatriz();
}
