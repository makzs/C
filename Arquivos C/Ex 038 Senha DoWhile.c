#include <stdio.h>

/*
Escreva um programa que verifique a validade de uma senha formada por n�meros inteiros fornecida
pelo usu�rio (a senha v�lida � o n�mero 2023).Se a senha informada pelo usu�rio for inv�lida,
a mensagem "ACESSO NEGADO" deve ser mostrado na tela e deve ser solicitada uma nova senha at� que
ela seja v�lida.Caso contr�rio deve ser mostrado na tela a mensagem "ACESSO PERMITIDO" junto com
um n�mero de vezes que a senha foi informada
*/

int main(){
	int senha, cont;
	
	printf("Informe a sua senha: ");
	
	do
	{
		printf("\n");
		printf("Senha: ");
		scanf("%d", &senha);
		cont++;
		if (senha != 2023){
					printf("ACESSO NEGADO");
		}
	} while (senha != 2023);
	printf("ACESSO PERMITIDO");
	printf("\n%d tentativas foram realizadas", cont);
}
