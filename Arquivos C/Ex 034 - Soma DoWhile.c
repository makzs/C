#include <stdio.h>

/*
Escreva um programa que leia um n�mero inteiro do teclado at� que encontre um n�mero iguala zero. 
No final, mostre a soma dos n�meros 
*/

int main(){
	int valor, soma;
	
	printf("Informe valores para serem somados! Caso queira encerrar o programa insira o valor 0");
	printf("\n");
	
	do 
	{
		printf("Valor: ");
		scanf("%d", &valor);
		soma = soma + valor;
	} while (valor != 0);
	printf("A soma dos valores e: %d", soma);
}
