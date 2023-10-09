#include<stdio.h>

/*
Escreva um programa que alimente um vetor com 5 números inteiros.
Apresente na tela apenas os valores ímpares que aparecem no vetor
*/

int main(){
	int indice, num[5];
	
	for(indice=0;indice<5;indice++){
		printf("Informe numero: ");
		scanf("%d", &num[indice]);
		
	}
	
	printf("Numeros impares: \n");
	
	for(indice=0;indice<5;indice++){
		if(num[indice] %2 != 0){
			printf("Numero: %d \n", num[indice]);
		}
		
	}
	return 0;
}
