#include<stdio.h>

/*
Escreva um programa que receba valores inteiros do usuário, alimente uma matriz M de 2 x 3 e,
utilizando uma estrutura de repetição, apresente na tela a soma de todos os elementos da matriz.
*/

int main(){
	int matriz [2] [3], i, j, 
		cont = 0;
	
	printf("Informe os valores dos elementos da matriz:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("\nElemento [%d] [%d] = ", i, j);
			scanf("%d", &matriz [i] [j]);
			cont = cont + matriz [i] [j];
		}
	}
	
	printf("\nA soma dos elementos da matriz e igual a %d", cont);
	return(0);
}
