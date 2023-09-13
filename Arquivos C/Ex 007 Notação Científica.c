#include <stdio.h>

/* Escrever número com notação científica */

int main()
{
	double TempoTotal;
	
	TempoTotal = 0.000000003295;
	printf("\n%f", TempoTotal);
	printf("\n%.4E", TempoTotal);
}
