#include<stdio.h>

/*
Escreva um programa que leia uma frase de até 50 caracteres. Em seguida, escreva a frase semos espaços em branco.
*/

int main(){
	char frase[50];
	int indice = 0;
	
	printf("REMOVEDOR DE ESPACOS\n\n");
	printf("Informe uma string de ate 50 caracteres: ");
	scanf(" %[^\n]", frase);
	
	for(indice=0;frase[indice] !='\0';indice++){
		if(frase[indice] != ' '){
			printf("%c", frase[indice]);
		}
		
	}
}
