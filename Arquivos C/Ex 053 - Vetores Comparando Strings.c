#include<stdio.h>
#include <string.h>

/*
Escreva um programa que verifique se duas strings são iguais.
*/

int main(){
	char str1[100], str2[100];
	
	printf("Informe uma string: ");
	scanf(" %[^\n]", str1);
	
	printf("Informe uma string: ");
	scanf(" %[^\n]", str2);
	
	if(strcmp(str1, str2) == 0){
		printf("%s e igual a %s", str1, str2);
	}
	
	else{
		printf("%s e %s sao diferentes", str1, str2);
	}
	
}
