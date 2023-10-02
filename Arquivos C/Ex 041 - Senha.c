#include <stdio.h>

/*
Escreva um programa que verifique a validade de uma senha formada por números inteiros fornecida
pelo usuário (a senha válida é o número 2023).Se a senha informada pelo usuário for inválida,
a mensagem "ACESSO NEGADO" deve ser mostrado na tela e deve ser solicitada uma nova senha até que
ela seja válida.Caso contrário deve ser mostrado na tela a mensagem "ACESSO PERMITIDO" junto com
um número de vezes que a senha foi informada
*/

int main(){
	/*variaveis*/
	int senha, cont;
	
	/*Pede a senha para o usuario*/
	printf("Informe a sua senha: ");
	
	do
	{
		/*Usuario informa a senha*/
		printf("\n");
		printf("Senha: ");
		scanf("%d", &senha);
		/*Contagem de tentativas*/
		cont++;
		/* Validação da senha */
		if (senha != 2023){
					printf("ACESSO NEGADO");
		}
	} while (senha != 2023);
	/*Senha correta*/
	printf("ACESSO PERMITIDO");
	printf("\n%d tentativas foram realizadas", cont);
}
