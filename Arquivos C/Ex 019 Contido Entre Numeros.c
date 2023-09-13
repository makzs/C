#include <stdio.h>

/* Escreva um algoritmo que mostre se um número digitado está compreendido
 entre 20 e 90(inclusive) ou não. */

int main(){
	int x, r;
	
	printf("Informe um valor inteiro: ");
	scanf("%d", &x);
	
	r = (x >= 20) && (x <= 90);
	
	if (r == 1){
		printf("O valor esta entre 20 e 90!");
	}
	else{
		printf("O valor nao esta entre 20 e 90!");
	}
}
