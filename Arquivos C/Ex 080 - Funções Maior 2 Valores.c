#include<stdio.h>

/*
 Escreva uma fun��o que retorne o maior valor entre dois n�meros inteiros.
*/

/* Fun��o maior para encontrar o maior valor entre dois parametros */
int maior(int valor1, int valor2){
	int maior;
	
	if (valor1 > valor2){
		maior = valor1;
	}
	
	else{
		maior = valor2;
	}
	
}

/*Fun��o Principal */
int main(){
	int valor_um, valor_dois;
	
	printf("Informe o primeiro valor: ");
	scanf("%d", &valor_um);
	
	printf("Informe o segundo valor: ");
	scanf("%d", &valor_dois);
	
	printf("O maior valor e: %d", maior(valor_um,valor_dois));
}
