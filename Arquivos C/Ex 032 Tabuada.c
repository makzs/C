#include <stdio.h>

/*
Escreva um programa que apresente na tela a tabuada de um número lido do teclado.
*/

int main(){
	int num, cont, resultado;
	
	printf("Informe um numero que deseja saber a tabuada: ");
	scanf("%d", &num);
	
	for (cont=1; cont <= 10; cont++){
		resultado = num * cont;
		printf("%d x %d = %d \n", num, cont, resultado);
	}
}
