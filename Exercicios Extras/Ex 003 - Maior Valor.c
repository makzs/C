#include <stdio.h>

/*
Escreva um programa em C que solicita 10 n�meros ao usu�rio, atrav�s de um la�o while, e ao final
mostre qual destes n�meros � o maior.
*/

int main(){
	int num, maior,
		cont = 1;
	
	while (cont <= 10){
		printf("Informe o valor %d: ", cont);
		scanf("%d", &num);
		
		if (num > maior){
			maior = num;
		}
		
		cont++;
	}
	
	printf("\nO maior numero informado foi: %d", maior);
	printf("\nFIM");
}
