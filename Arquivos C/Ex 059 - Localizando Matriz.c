#include<stdio.h>

/*
Escreva um programa que receba valores inteiros do usuário e alimente uma matriz M de 2 x 3.
Em seguida, receba um número qualquer do teclado e mostre na tela o índice em que o número 
se encontra na matriz, ou então a mensagem "Número não encontrado!", 
se o número não existir na matriz.
*/

int main(){
	int matriz [2] [3], i, j, resposta;
	
	printf("Informe os valores dos elementos da matriz:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("\nElemento [%d] [%d] = ", i, j);
			scanf("%d", &matriz [i] [j]);
		}
	}
	
	sleep(1);
	printf("\n\n------------Localizador de Valor------------\n\n");
	printf("Informe o valor que deseja procurar na matriz: ");
	scanf("%d", &resposta);
	printf("Procurando...");
	sleep(1);
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			if(matriz [i] [j] == resposta){
				printf("\nValor encontrado! localizado na posicao: matriz [%d] [%d]", i, j);
				break;
			}
			else{
				if(i==1&&j==2){
					printf("\nValor nao encontrado! Encerrando Progarama...");
					sleep(1);
				}
			}
		}
	}
	
	printf("\nFIM");
	return(0);
}
