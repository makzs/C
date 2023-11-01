#include<stdio.h>

/*
Modifique a função "linha" da atividade anterior de tal forma que a quantidade 
de asteriscos a serem impressos seja um argumento da sua chamada.
*/

/*Prototipo de funções*/
int linha(quantidade);
int numeros(limite);
int main();

/*Declara a função linha */
int linha(quantidade){
	int i;
	
	/*Imprime determinada quantidade de "*" na tela*/
	for(i = 1;i <= quantidade; i++){
		printf("*");
	}
	printf("\n");
}

/*Declara a função numeros */
int numeros(limite){
	int i;
	
	/*Imprime determinada quantidade de numeros */
	for(i = 1; i <= limite; i++){
		printf("%d \n", i);
	}
	printf("\n");
}

/* Declara a função principal */
int main(){
	
	linha(20);
	printf("Numeros entre 1 e 20 \n");
	linha(20);
	
	numeros(5);
	
	linha(20);
}
