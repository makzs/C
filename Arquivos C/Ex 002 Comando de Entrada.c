#include <stdio.h>

int main()
{
	int x, z;
	float y;
	
	/* Leitura de um valor inteiro */
	printf("Insira um valor inteiro: ");
	scanf("%d", &x);
	
	printf("%d", x);
	
	/* Leitura de um valor real */
	printf("Insira um valor real: ");
	scanf("%f", &y);
	
	printf("%f", y);
	
	/* Leitura de um valor inteiro e outro real */
	printf("Insira um valor inteiro e outro real: ");
	scanf("%d%f", &x, &y);
	
	printf("%d%f", x, y);
	
	/* Leitura de dois valores inteiros */
	printf("Insira dois valores inteiros: ");
	scanf("%d%d", &x, &z);
	
	printf("%d%d", x, z);
	
	/* Leitura de valores inteiros com espaço */
	printf("Insira dois valores inteiros com espaco:");
	scanf("%d %d", &x, &z);
	
	printf("%d %d", x, z);
	
	
	return 0;
}
