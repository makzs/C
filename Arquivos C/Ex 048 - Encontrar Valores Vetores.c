#include<stdio.h>

/*
Escreva um programa alimente um vetor de 5 n�meros inteiros distintos.Em seguida, leia um n�mero qualquer do teclado 
e mostre na tela o �ndice em que o n�mero se encontra no vetor, ou ent�o a mensagem "N�o encontrado", 
se o n�mero n�o estiver presente no vetor.
*/

int main(){
	int indice, resposta, num[5];
	
	for(indice=0;indice<5;indice++){
		printf("Informe Numero: ");
		scanf("%d", &num[indice]);
	}
	
	printf("\n Identificador de valores \n");
	printf("Informe um valor que deseja procurar: ");
	scanf("%d", &resposta);
	
	printf("Procurando valor...");
	sleep(1);
	
	for(indice=0;indice<5;indice++){
		if(num[indice] == resposta){
			printf("Valor encontrado! o indice do local do valor e: %d", indice);
			break;
		}
		else{
			if(indice == 4){
				printf("Valor nao encontrado!");
			}
		}
	}
}


