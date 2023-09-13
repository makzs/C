#include <stdio.h>

/* Escreva um algoritmo que, dada a idade de uma pessoa,
 determine sua classificação com o menor de idade (menos de 18 anos),
 maior de idade ou terceira idade (idade igual ou superiora 65 anos). */

int main(){
	int idade, menor, maior, terceira;
	
	printf("Informe a idade da pessoa: ");
	scanf("%d", &idade);
	
	menor = (idade < 18);
	maior = (idade >= 18);
	terceira = (idade >= 65);
	
	if (menor == 1){
		printf("Essa pessoa e menor de idade!");
	}
	if (maior == 1){
		printf("Essa pessoa e maior de idade!");
	}
	if (terceira == 1){
		printf(" Essa pessoa e da terceira idade!");
	}
}
