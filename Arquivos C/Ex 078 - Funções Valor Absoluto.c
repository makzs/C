#include<stdio.h>
#include<stdlib.h>

/*
Escreva um programa que tenha uma função que retorne o valor absoluto de um número.
*/

/* Função absoluto para encontrar o valor absoluto de um numero */
int absoluto(num){
	int resultado;
	
	resultado = abs(num);
	return resultado;
}

/* Função Principal */
int main(){
	int n;
	
	printf("Informe um valor para saber seu valor absoluto: ");
	scanf("%d", &n);
	
	printf("O valor absoluto de %d e: %d", n, absoluto(n));
}
