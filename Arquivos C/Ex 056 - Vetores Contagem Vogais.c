#include<stdio.h>

/*
Escreva um programa para contar a quantidade de vogais em uma string.
*/

int main(){
	char str[100];
	int cont, i;
	
	printf("Informe uma string: ");
	scanf("%[^\n]", str);
	
	for(i=0;str[i] !='\0';i++){
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ){
			cont++;
		}
		else if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ){
			cont++;
		}
	}
	
	printf("O numero de vogais presente na string e de: %d", cont);
	return 0;
}
