#include<stdio.h>

/*
Escreva um programa que receba a string = "Hello, World!" e a apresente invertida.
*/

int main(){
	char str[] = "Hello, World!";
	int indice = 0;
	
	for(indice=12;indice>=0;indice--){
		printf("%c", str[indice]);
	}
}
