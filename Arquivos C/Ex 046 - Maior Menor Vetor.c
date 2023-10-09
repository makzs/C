#include<stdio.h>

/*
Escreva um programa que alimente um vetor com 5 números.
Apresente na tela o menor valor do vetor, o maior valor do vetor, 
a soma dos valores do vetor e a média dos valores do vetor
*/

int main(){
	int indice, num[5], maior, menor,
		soma = 0;
	
	for(indice=0;indice<5;indice++){
		printf("Informe Numero: ");
		scanf("%d", &num[indice]);
		soma = soma + num[indice];
		if(indice == 0){
			maior = num[indice];
			menor = num[indice];
		}
		
		else{
			if(maior < num[indice]){
			maior = num[indice];
			}
			else if( menor > num[indice]){
				menor = num[indice];
			}
		}
		
	}
	
	printf("O maior valor informado: %d\n", maior);
	printf("O menor valor informado: %d\n", menor);
	printf("A soma dos valores: %d\n", soma);
	printf("A media dos valores: %d\n", soma/5);
}
