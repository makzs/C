#include <stdio.h>

/*
Escreva um programa que leia como entrada a altura H inteiro, valide H
para valores maiores ou igual a 1 e menores ou igual a 20, e imprima 
na tela um triângulo de lados iguais a H formado pelo caractere #
Exemplo:
#
##
###
####
No caso acima H = 4
*/

int main(){
	int altura, cont, 
		cont2 = 0;
	
	do 
	{
		printf("Informe a altura do triangulo: ");
		scanf("%d", &altura);
	
		if (altura >= 1 && altura <= 20){
			printf("IMPRIMINDO TRIANGULO: \n");
			sleep(1);
			while (cont != altura){
				for (cont=0; cont <= cont2; cont++){
					printf("#");
				}
				cont2++;
				printf("\n");
			}
		}
		else{
			printf("Valor invalido por favor insira uma valor valido: \n");
		}
	} while (altura < 1 || altura > 20);
	printf("FIM");
}
