#include <stdio.h>

/* Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m,
	a trena n�o � suficientementelonga. Assumindo que seja poss�vel
	medir sua sombra e a sombra do pr�dio no ch�o, e quevoc� lembre
	da sua altura, escreva um algoritmo para ler os dados necess�rios
	e calcular aaltura do pr�dio */

int main()
{
	float alturaP, sombraP, alturaH, sombraH;
	
	printf("Para calcular a atura do predio a partir de sua sombra preciso de algumas informa��es: ");
	printf("Informe a sua altura: ");
	scanf("%f", &alturaH);
	
	printf("Informe a sua sombra: ");
	scanf("%f", &sombraH);
	
	printf("Informe a sombra do predio: ");
	scanf("%f", &sombraP);
	
	alturaP = (alturaH * sombraP) / sombraH;
	
	printf("A altura do predio e de: %f", alturaP);
}
