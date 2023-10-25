#include<stdio.h>

/*
Escreva um programa que declare e inicialize uma matriz M de 5 x 5 elementos e, 
utilizando uma estrutura de repetição, apresente na tela a soma dos elementos da diagonal principal da matriz.
*/

int main(){
	int m [5] [5] =
	{1, 2, 3, 4, 5, 
	6, 7, 8, 9, 10,
	11, 12, 13, 14, 15,
	16, 17, 18, 19, 20,
	21, 22, 23, 24, 25}, 
	i, j, cont;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==j){
				cont = cont + m [i] [j];
			}
		}
	}
	
	printf("A soma dos valores dos elementos da diagonal principal da matriz e igual a: %d", cont);
}
