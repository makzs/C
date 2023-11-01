#include<stdio.h>

/*
Escreva um programa que tenha uma função que receba dois números inteiros e retorne a somados números existentes entre eles.
*/

/* Função Soma para somar dois parametros */
int soma(int num1, int num2){
	int s;
	s = num1 + num2;
	return s;
}

/* Função Principal */
int main(){
	int resultado;
	resultado = soma(3, 5);
	
	printf("Resultado: %d", resultado);
	
	return 0;
}
