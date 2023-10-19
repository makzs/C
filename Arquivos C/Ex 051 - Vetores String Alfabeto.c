#include<stdio.h>

/*
 Escreva um programa para exibir os caracteres de A a Z.
*/


int main(){
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	int indice = 0;
	
	for(indice=0;indice<=26;indice++){
		printf("%c ", abc[indice]);
	}
	
}
