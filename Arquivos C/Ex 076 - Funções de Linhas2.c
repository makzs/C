#include<stdio.h>

/*
 Ajuste o programa da atividade anterior, para criar um procedimento de nome "linha" que imprimaos asteriscos.
*/

/*Procedimento linha */
void linha(){
	printf("********************");
}

/*Função Principal*/
int main(){
	int i;
	
	linha();
	printf("\n");
	
	printf("Numeros entre 1 e 5 \n");
	
	linha();
	printf("\n");
	
	for(i = 1; i <= 5; i++){
		printf("%d \n", i);
	}
	printf("\n");
	
	linha();
}
