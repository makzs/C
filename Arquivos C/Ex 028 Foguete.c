#include <stdio.h>

/*
Escreva um programa que mostre na tela uma contagem regressiva de 10 at� 0
para olan�amento de um foguete.Ap�s o t�rmino da contagem regressiva,
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
