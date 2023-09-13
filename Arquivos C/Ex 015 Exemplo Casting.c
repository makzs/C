#include <stdio.h>
#include <stdlib.h>

/* se o numerador e o denominador forem números inteiros,
 por padrão o compilador retornará apenas a parte inteira da divisão. */
 
/* é possivel realizar o "casting", que é a transformação de um tipo de dado para outro tipo */

int main(){
	float resultado;
	int x, y;
	
	printf("Informe o valor inteiro para o dividendo: ");
	scanf("%d", &x);
	
	printf("Informe o valor inteiro para o divisor: ");
	scanf("%d", &y);
	
	resultado = (float) x / y;
	
	printf("O resultado da divisao e de: %f", resultado);
}
