#include <stdio.h>

/*Exemplo 1 de definir constantes */
#define ICMS 0.18 /* constante */

int main()
{
	float preco_produto, valor_icms;
	
	printf("Informe o valor do produto: ");
	scanf("%f", &preco_produto);
	
	valor_icms = preco_produto * ICMS;
	
	printf("Valor do imposto: R$ %.2f", valor_icms);
	
	return 0;
	
}
