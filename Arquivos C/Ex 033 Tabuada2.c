#include <stdio.h>

/*
Escreva um programa que mostre a tabuada de um n�mero inteiro qualquer que ser� digitadopelo usu�rio,
mas a tabuada n�o deve necessariamente iniciar em 1 e terminar em 10, ou seja,o valor inicial e final
devem ser informados tamb�m pelo usu�rio
*/

int main(){
	int num, inicio, fim, cont, resultado;
	
	printf("Informe um numero que voce deseja saber a tabuada: ");
	scanf("%d", &num);
	printf("Informe o numero que voce deseja ser o come�o da tabuada: ");
	scanf("%d", &inicio);
	printf("Informe o numero que voce deseja ser o fim da tabuada: ");
	scanf("%d", &fim);
	
	for (cont = inicio; cont <= fim; cont++){
		resultado = num * cont;
		printf("%d x %d = %d \n", num, cont, resultado);
	}
}
