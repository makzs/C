#include <stdio.h>

/*
Escreva um programa em C que solicita 10 números ao usuário, através de um laço while, e ao final
mostre qual destes números é o maior.
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
