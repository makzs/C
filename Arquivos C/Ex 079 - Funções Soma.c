#include<stdio.h>

/*
Escreva um programa que tenha uma fun��o que receba dois n�meros inteiros e retorne a somados n�meros existentes entre eles.
*/

/* Fun��o Soma para somar dois parametros */
int soma(int num1, int num2){
	int s;
	s = num1 + num2;
	return s;
}

/* Fun��o Principal */
int main(){
	int resultado;
	resultado = soma(3, 5);
	
	printf("Resultado: %d", resultado);
	
	return 0;
}
