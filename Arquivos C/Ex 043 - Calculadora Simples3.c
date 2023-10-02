#include <stdio.h>

/*
Fa�a um programa que funcione como uma calculadora de dois n�meros inteiros, exibindo aseguinte tela para o usu�rio:
# MENU PRINCIPAL #
[ 1 ] Soma 
[ 2 ] Subtra��o
[ 3 ] Divis�o
[ 4 ] Multiplica��o
[ 5 ] Sair

Se as op��es 1, 2, 3 ou 4 forem escolhidas, executar a opera��o indicada, exibindo o resultadona tela.
Se a op��o 5 for escolhida, encerrar a execu��o do programa
Se for lido uma op��o diferente de 1, 2, 3, 4, ou 5, indicar escolha inv�lida e voltar para o menu
*/

int main(){
	float x, y;
	int resposta;
	
	printf("# Calculadora #");
	printf("\nInforme o valor 1: ");
	scanf("%f", &x);
	printf("\nInforme o valor 2: ");
	scanf("%f", &y);
	
	do
	{
		printf("\n# MENU PRINCIPAL #\n");
		printf("\n[ 1 ] Soma");
		printf("\n[ 2 ] Subtracao");
		printf("\n[ 3 ] Divisao");
		printf("\n[ 4 ] Multiplicacao");
		printf("\n[ 5 ] Sair");
		printf("\nOpcao: ");
		scanf("%d", &resposta);
		system("cls");
		
		switch (resposta) {
			case 1:
				printf("Somando %.2f e %.2f...", x, y);
				printf("\nResultado: %.2f ", x+y);
				sleep(1);
				printf("\nVoltando ao Menu Principal...");
				sleep(1);
				break;
			case 2:
				printf("Subtraindo %.2f e %.2f...", x, y);
				printf("\nResultado: %.2f", x-y);
				sleep(1);
				printf("\nVoltando ao Menu Principal...");
				sleep(1);
				break;
			case 3:
				printf("Dividindo %.2f e %.2f...", x, y);
				printf("\nResultado: %.2f", x/y);
				sleep(1);
				printf("\nVoltando ao Menu Principal...");
				sleep(1);
				break;
			case 4:
				printf("Multiplicando %.2f e %.2f...", x, y);
				printf("\nResultado: %.2f", x*y);
				sleep(1);
				printf("\nVoltando ao Menu Principal...");
				sleep(1);
				break;
			case 5:
				printf("Encerrando programa...");
				sleep(1);
				break;
			default:
				printf("Valor Invalido");
				printf("\nVoltando ao Menu principal...");
				sleep(1);
				break;
				
		}
	} while (resposta != 5);
	printf("FIM DO PROGRAMA");
}
