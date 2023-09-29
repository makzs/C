#include <stdio.h>

/*
Escreva um programa que apresente o seguinte menu:
# MENU PRINCIPAL #
[ 1 ] Inserir
[ 2 ] Excluir
[ 3 ] Consultar
[ 4 ] Listar
[ 5 ] Sair
Se as opções 1, 2, 3 ou 4 forem escolhidas, mostrar na tela o nome da opção
(Inserir, Excluir,Consultar, Listar).Se a opção 5 for escolhida, encerrar a execução do programa.
*/

int main(){
	int resposta;
	
	printf("Bem vindo");
	printf("\n");
	
	do 
	{
		printf("\n# MENU PRINCIPAL #");
		printf("\n[ 1 ] Inserir");
		printf("\n[ 2 ] Excluir");
		printf("\n[ 3 ] Consultar");
		printf("\n[ 4 ] Listar");
		printf("\n[ 5 ] Sair");
		printf("\n");
		printf("Opcao: ");
		scanf("%d", &resposta);
		if (resposta == 1) {
			printf("A opcao escolhida foi [ 1 ] Inserir");
			printf("\nRetornando ao menu principal...");
			sleep(1);
		}
		else if (resposta == 2) {
			printf("A opcao escolhida foi [ 2 ] Excluir");
			printf("\nRetornando ao menu principal...");
			sleep(1);
		}
		else if (resposta == 3) {
			printf("A opcao escolhida foi [ 3 ] Consultar");
			printf("\nRetornando ao menu principal...");
			sleep(1);
		}
		else if (resposta == 4) {
			printf("A opcao escolhida foi [ 4 ] Listar");
			printf("\nRetornando ao menu principal...");
			sleep(1);
		}
		else if (resposta == 5 ) {
			printf("\nA opcao escolhida foi [ 5 ] Sair");
			printf("\nFinalizando programa...");
			sleep(1);
		}
		else {
			printf("\nValor invalido! voltando ao menu principal");
			sleep(1);
		}
	} while (resposta != 5);
	printf("Programa encerrado!");
}
