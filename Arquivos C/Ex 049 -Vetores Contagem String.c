#include<stdio.h>
#include <string.h>

/*
Escreva um programa que mostre o tamanho de uma string informada pelo usu�rio (utilize afun��o apropriada).
*/

int main(){
	char nome[20];
	
	printf("Informe seu nome: ");
	scanf(" %20[^\n]", nome);
	printf("O tamanho e %d", strlen(nome));
}


