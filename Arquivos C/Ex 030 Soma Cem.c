#include <stdio.h>

/*
Escreva um programa que mostre na tela a soma obtida dos 100 primeiros números inteiros
 (1+ 2 + 3 + 4 + 5 + ... + 100). Resultado: 5050
*/

int main (){
	int cont, soma = 0;
	
	for (cont=1; cont <= 100; cont++){
		soma = soma + cont;
	}
	
	printf("A soma e igual a: %d", soma);
}
