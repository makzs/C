#include <stdio.h>
#include <stdlib.h>

/* se o numerador e o denominador forem n�meros inteiros,
 por padr�o o compilador retornar� apenas a parte inteira da divis�o. */

int main(){
	float resultado;
	int x, y;
	
	printf("Informe o valor inteiro para o dividendo: ");
	scanf("%d", &x);
	
	printf("Informe o valor inteiro para o divisor: ");
	scanf("%d", &y);
	
	resultado = x / y;
	
	printf("O resultado da divisao e de: %f", resultado);
}
