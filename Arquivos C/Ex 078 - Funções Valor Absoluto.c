#include<stdio.h>
#include<stdlib.h>

/*
Escreva um programa que tenha uma fun��o que retorne o valor absoluto de um n�mero.
*/

/* Fun��o absoluto para encontrar o valor absoluto de um numero */
int absoluto(num){
	int resultado;
	
	resultado = abs(num);
	return resultado;
}

/* Fun��o Principal */
int main(){
	int n;
	
	printf("Informe um valor para saber seu valor absoluto: ");
	scanf("%d", &n);
	
	printf("O valor absoluto de %d e: %d", n, absoluto(n));
}
