#include<stdio.h>

/*
Escreva um programa que alimente um vetor com 5 números inteiros e apresente na tela o vetorem ordem inversa
*/

int main(){
	int indice, num[5];
	
	for(indice=0;indice<5;indice++){
		printf("Informe numero: ");
		scanf("%d", &num[indice]);
		
	}
	
	printf("Reverso:\n");
	
	for(indice=4;indice>=0;indice--){
		printf(" %d \n", num[indice]);
	}
	
	return 0;
}
