#include <stdio.h>

/* Média Ponderada em C */

int main()
{
	float nota1, nota2, nota3, media;
	
	printf("Informe a sua primeira nota (peso 2): ");
	scanf("%f", &nota1);
	
	printf("Informe a sua segunda nota (peso 3): ");
	scanf("%f", &nota2);
	
	printf("Informe a sua terceira nota (peso 5): ");
	scanf("%f", &nota3);
	
	media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;
	
	printf("Considerando os pesos sua media foi de %f", media);
	
	return 0;
}
