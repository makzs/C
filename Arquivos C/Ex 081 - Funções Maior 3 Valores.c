#include<stdio.h>

/*
Escreva uma fun��o que retorne o maior valor entre tr�s n�meros inteiros.
*/

/*Fun��o maior, identifica o maior valor entre 3 parametros */
int maior(valor1, valor2, valor3){
	int maior;
	
	if (valor1 > valor2 && valor1 > valor3){
		maior = valor1;
	}
	
	else{
		if (valor2 > valor3){
			maior = valor2;
		}
		
		else{
			maior = valor3;
		}
	}
	
	return(maior);
}

/* Fun��o Principal */
int main(){
	int primeiro, segundo, terceiro;
	
	printf("Informe o valor do primeiro valor: ");
	scanf("%d", &primeiro);
	
	printf("Informe o valor do segundo valor: ");
	scanf("%d", &segundo);
	
	printf("Informe o valor do terceiro valor: ");
	scanf("%d", &terceiro);
	
	printf("O maior valor e: %d", maior(primeiro, segundo, terceiro));
}
