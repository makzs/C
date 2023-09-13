#include <stdio.h>

/* Uma fabrica de refrigerantes vende seu produto em três formatos:
	lata de 350 ml, garrafa de 600 ml e garrafa de 2 litros.
	Tomando por base que um comerciante compre uma determinada quantidade
	de cada um dos formatos disponíveis, escreva um algoritmo
	para calcular quantos litros de refrigerante ele comprou. */
	
int main()
{
	int quantidade_pequena, quantidade_media, quantidade_grande, total;
	
	printf("Informe quantas unidades de refrigerante 350 ml foram compradas: ");
	scanf("%d", &quantidade_pequena);
	
	printf("Informe quantas unidades de refrigerante 600ml foram compradas: ");
	scanf("%d", &quantidade_media);
	
	printf("Informe quantas unidades de refrigerante 2L foram compradas: ");
	scanf("%d", &quantidade_grande);
	
	total = ((quantidade_pequena * 350) + (quantidade_media * 600) + (quantidade_grande * 2000)) / 1000;
	
	printf("A quantidade em litros que foram compradas foi de: %d", total);
}
