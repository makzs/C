#include <stdio.h>

/*
Escreva um programa em C que solicita 10 n�meros ao usu�rio, atrav�s de um la�o while,
e ao final mostre os dois maiores n�meros digitados pelo usu�rio.
*/

int main(){
		int num, maior, maior2,
		cont = 3;
		
	printf("Informe o valor 1: ");
	scanf("%d", &maior);
	printf("Informe o valor 2: ");
	scanf("%d", &num);
	
	if (maior > num){
		maior2 = num;
	}
	else{
		maior2 = maior;
		maior = num;
	}
	
	while (cont <= 10){
		printf("Informe o valor %d: ", cont);
		scanf("%d", &num);
		
		if (num > maior){
			maior = num;
		}
		else{
			if (num > maior2){
				maior2 = num;
			}
		}
		
		cont++;
	}
	
	printf("\nO maior numero informado foi: %d", maior);
	printf("\nO segundo maior numero informado foi: %d", maior2);
	printf("\nFIM");
}
