#include<stdio.h>

/*
Escreva um programa que alimente um vetor com 5 n�meros e calcule a m�dia destes valores.
Na sequ�ncia, apresente na tela os valores que s�o maiores ou iguais � m�dia
*/

int main(){
	int indice, num[5], soma;
	
	for(indice=0;indice<5;indice++){
		printf("Informe numero: ");
		scanf("%d", &num[indice]);
		soma = soma + num[indice];
	}
	
	printf("Calculando Media...\n");
	sleep(1);
	printf("A media dos valores e: %d", soma/5);
	printf("\n");
	printf("Valores iguais ou acima da media: \n");
	
	for(indice=0;indice<5;indice++){
		if(num[indice] >= soma/5){
			printf("Numero: %d \n", num[indice]);
		}
	}
	
}
