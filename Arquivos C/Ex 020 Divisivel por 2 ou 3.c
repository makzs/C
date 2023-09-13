#include <stdio.h>

/* Escreva um algoritmo que efetue a leitura de um número inteiro
 e apresente se esse número é divisível por 2 e divisível por 3 */
 
 int main(){
 	int x, dois, tres;
 	
 	printf("Informe um valor inteiro: ");
 	scanf("%d", &x);
 	
 	dois = (x%2==0);
 	tres = (x%3==0);
 	
 	if (dois == 1){
 		printf("O valor informado e divisivel por 2!");
	 }
	if (tres == 1){
		printf("O valor informado e divisivel por 3!");
	}
	else{
		printf("O valor informado não e divisivel nem por 2 nem por 3!");
	}
 }
