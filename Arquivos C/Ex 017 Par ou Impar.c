#include <stdio.h>

/* Escreva um algoritmo que receba um número inteiro e verifique
 se este número é par ou ímpar.Em seguida, transcreva para a linguagem C. */
 
 int main () {
 	int numero;
 	
 	printf("Informe o Numero: ");
 	scanf("%d", &numero);
 	
 	if (numero % 2 == 0) {
 		printf("Esse numero e par!");
	 }
	 else {
	 	printf("Esse numero e Impar");
	 }
 }
