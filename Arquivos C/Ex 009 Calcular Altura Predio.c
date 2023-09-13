#include <stdio.h>

/* Num dia de sol, você deseja medir a altura de um prédio, porém,
	a trena não é suficientementelonga. Assumindo que seja possível
	medir sua sombra e a sombra do prédio no chão, e quevocê lembre
	da sua altura, escreva um algoritmo para ler os dados necessários
	e calcular aaltura do prédio */

int main()
{
	float alturaP, sombraP, alturaH, sombraH;
	
	printf("Para calcular a atura do predio a partir de sua sombra preciso de algumas informações: ");
	printf("Informe a sua altura: ");
	scanf("%f", &alturaH);
	
	printf("Informe a sua sombra: ");
	scanf("%f", &sombraH);
	
	printf("Informe a sombra do predio: ");
	scanf("%f", &sombraP);
	
	alturaP = (alturaH * sombraP) / sombraH;
	
	printf("A altura do predio e de: %f", alturaP);
}
