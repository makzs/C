#include <stdio.h>

/* 
Escreva um aplicativo em C que recebe inteiro e mostra os números pares e ímpares 
(separados, em duas colunas), de 1 até esse inteiro.
*/

int main(){
	int limite, 
		par, impar = 1;
	
	printf("Colunas pares e impares");
	printf("\nInforme um limite de contagem: ");
	scanf("%d", &limite);
	
	printf("\nColuna Numeros Par: \n");
	while (par <= limite){
		if (par % 2 == 0){
			printf("%d\n", par);
			
		}
		par++;
	}
	
	printf("\n");
	
	printf("\nColuna Numeros Impar: \n");
	while (impar <= limite){
		if (impar % 2 != 0){
			printf("%d\n", impar);
			
		}
		impar++;
	}
	
	printf("\nFIM");
}
