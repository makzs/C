#include <stdio.h>

/*
Escreva um programa que mostre todos os números pares e impares existentes entre
 1 e um número lidodo teclado, bem como a quantidade de números apresentados
*/

int main() {
	int cont, limite, par, impar;
	
	printf("Defina um limite: ");
	scanf("%d", &limite);
	par = 0;
	impar = 0;
	
	for(cont= 1; cont <= limite; cont++) 
	{
		if (cont % 2 == 0){
			printf("%d ", cont);
			par = par + 1;
		}
	}
	
	printf("\nEsses sao os valores pares entre 1 e %d, resultando em %d numeros pares", limite, par);
	printf("\n");
	printf("\n");
	
	for(cont= 1; cont <= limite; cont++) 
	{
		if (cont % 2 != 0){
			printf("%d ", cont);
			impar = impar + 1;
		}
	}
	
	printf("\nEsses sao os valores impares entre 1 e %d, resultando em %d numeros impares", limite, impar);
	
}


