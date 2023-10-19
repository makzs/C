#include<stdio.h>

/*
 Escreva um programa que mostre o tamanho de uma string informada pelo usuário (não utilize funções).
*/

int main(){
	int indice = 0;
	char str[100];
	
	printf("Informe uma string: ");
	scanf("%[^\n]", str);
	
	for(indice=0; str[indice] !='\0' ;indice++){
		printf("%c", str[indice]);
	};
	
	printf("\nO tamanho da string e: %d", indice);
}


