#include <stdio.h>

/*
Escreva um programa que mostre os números múltiplos de 5, no intervalo de 1 até 100.
*/

int main(){
	int contador;
	
	for (contador= 5; contador <= 100; contador=contador+5)
	{
		if(contador < 100) {
			printf("%d-", contador);
		}
			
		else {
			printf("%d", contador);
		}
	}
}
