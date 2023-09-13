#include <stdio.h>

/* Escreva um algoritmo que leia o valor de dois números inteiros
 e a operação aritmética desejada dentre as operações adição “+”, subtração “-”,
 multiplicação “*” e subtração “/”. Então calcule e apresente o resultado na tela.
 Lembre-se que divisão por zero não é possível */

int main(){
	char resposta;
	int x, y, zero;
	
	printf("Informe o primeiro valor: ");
	scanf("%d", &x);
	
	printf("Informe o segundo valor: ");
	scanf("%d", &y);
	
	zero = (x == 0) || (y == 0);
	
	printf("Informe a operação que voce deseja: [+ - * /] ");
	scanf("%s", &resposta);
	
	if (resposta == '+'){
		int soma = x + y;
		
		printf("%d", soma);
	}
	if (resposta == '-'){
		int subtracao = x - y;
		
		printf("%d", subtracao);
	}
	if (resposta == '*'){
		int multiplicacao = x * y;
		
		printf("%d", multiplicacao);
	}
	if (resposta == '/'){
		if (zero == 0){
			int divisao = x / y;
			
			printf("%d", divisao);
		}
		else{
		printf("Divisao com 0 nao e possivel");
		}
	}
}
