#include <stdio.h>
#include <math.h>

/*Exemplo 2 de definir constantes */
#define PI 3.1416 /* constante */

int main()
{
	float raio, area;
	
	printf("Informe o raio: ");
	scanf("%f", &raio);
	
	area = PI * pow(raio,2);
	
	printf("Area da circunferencia: %.2f", area);
}
