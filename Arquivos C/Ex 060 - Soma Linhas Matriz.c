#include<stdio.h>

/*
Escreva um programa que declare e inicialize (sem leitura do teclado) uma matriz M de 5 x 5 elementos, 
e, utilizando uma estrutura de repeti��o, apresente na tela a soma de todos os elementos da linha 3 da matriz.
*/

int main(){
	int matriz [5] [5] = 
	{1, 2, 3, 4, 5, 
	6, 7, 8, 9, 10,
	11, 12, 13, 14, 15,
	16, 17, 18, 19, 20,
	21, 22, 23, 24, 25}, 
	i, j, cont;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==3){
				cont = cont + matriz [i] [j];
			}
		}
	}
	
	printf("A soma dos elementos da linha 3 da matriz e igual a: %d", cont);
	printf("\nFIM");
	return(0);
}
