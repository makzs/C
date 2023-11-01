#include<stdio.h>

/*
Escreva uma função que retorne a média dos valores contidos em um vetor com 5 elementos
*/

/* Prototipo de Funções */
int media();
int main();

/* Variaveis Globais */
int vetor[5] = {20, 30, 40, 10, 80}; 

/* Declaração de Funções */
int media(){
	int i, media, 
		soma = 0;
	for(i=0;i<5;i++){
		soma = soma + vetor[i];
	}
	
	media = soma / 5;
	
	printf("%d", media);
	return media;
}

int main(){
	printf("A media dos valores de um vetor contendo: \n");
	printf("20, 30, 40, 10, 80\n");
	printf("E igual a: ");
	media();
}
