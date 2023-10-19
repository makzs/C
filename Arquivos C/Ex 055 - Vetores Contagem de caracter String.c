#include<stdio.h>

/*
 Escreva um programa que receba uma string e um caractere, e retorne o número de vezes queesse caractere aparece na string
*/

int main(){
	char frase[100], letra;
	int cont, 
		indice = 0;
	
	printf("CONTADOR DE CARACTERES\n\n");
	printf("Informe uma string: ");
	scanf(" %[^\n]", frase);
	printf("Informe o caractere que deseja contar: ");
	scanf(" %c", &letra);
	
	for(indice=0;frase[indice] !='\0';indice++){
		if(frase[indice] == letra){
			cont++;
		}
	}
	
	printf("A quantidade de ' %c ' 'que aparece na string ' %s ' e de %d", letra, frase, cont);
}
