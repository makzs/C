#include<stdio.h>

/*
Escreva um programa que alimente um vetor com 5 números e calcule a média destes valores.
Na sequência, apresente na tela os valores que são maiores ou iguais à média
*/

int main(){
	int indice, num[5], soma;
	
	for(indice=0;indice<5;indice++){
		printf("Informe numero: ");
		scanf("%d", &num[indice]);
		soma = soma + num[indice];
	}
	
	printf("Calculando Media...\n");
	sleep(1);
	printf("A media dos valores e: %d", soma/5);
	printf("\n");
	printf("Valores iguais ou acima da media: \n");
	
	for(indice=0;indice<5;indice++){
		if(num[indice] >= soma/5){
			printf("Numero: %d \n", num[indice]);
		}
	}
	
}
