#include <stdio.h>

/*
Escreva um programa que mostre na tela uma contagem regressiva de 10 até 0
para olançamento de um foguete.Após o término da contagem regressiva,
deve ser apresentada a palavra "Fogo!"
*/

int main() {
	int cont;
	
	for(cont= 10; cont >= 1; cont--)
	{
		system("cls");
		printf("%d\n", cont);
		sleep(1);
	}
	
	system("cls");
	printf("FOGO!");
}
