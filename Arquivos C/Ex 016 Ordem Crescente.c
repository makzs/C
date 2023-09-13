#include <stdio.h>

/* Escreva um algoritmo que leia dois números inteiros
 e os apresente em ordem crescente.Em seguida, transcreva para a linguagem C. */

int main()
{
	int x, y;
	
	printf("Informe o valor de x: ");
	scanf("%d", &x);
	
	printf("Informe o valor de y: ");
	scanf("%d", &y);
	
	if (x > y){
		printf("%d %d", x, y);
	}
	else{
		printf("%d %d", y, x);
	}
}
