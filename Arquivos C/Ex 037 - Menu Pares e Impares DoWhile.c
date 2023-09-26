#include <stdio.h>

/*
Escreva um programa que apresente na tela o seguinte menu:
# MENU PRINCIPAL #
[ 1 ] Digitar um numero par
[ 2 ] Digitar um numero impar
[ 3 ] Sair
Caso o usuário escolha a opção 1, ele deve digitar um número par para voltar ao menu.
O mesmo deve ser feito na opção 2, mas para um número ímpar.
Caso o usuário escolha a opção 3, o programa deve apresentar a quantidade de números pares 
digitados na opção 1, a quantidade de números ímpares digitados na opção 2 e encerrar o programa
*/

int main(){
	int resposta, 
		contpar, contimpar = 0;
	
	printf("Pares e Impares");
	
	do 
	{
		printf("\n# MENU PRINCIPAL #\n");
		printf("\n[ 1 ] Digitar um numero par para voltar ao menu");
		printf("\n[ 2 ] Digitar um numero impar para voltar ao menu");
		printf("\n[ 3 ] Sair");
		printf("\nOpcao: ");
		scanf("%d", &resposta);
		
		if (resposta == 1){
			int numpar;
			do{
			printf("\nInsira o valor: ");
			scanf("%d", &numpar);
				if (numpar % 2 == 0){
					contpar++;
					printf("Voltando ao menu principal...");
				}
			} while (numpar % 2 != 0);
		}
		
		else if (resposta == 2){
			int numimpar;
			do{
			printf("\nInsira o valor: ");
			scanf("%d", &numimpar);
				if (numimpar % 2 != 0){
					contimpar++;
					printf("Voltando ao menu principal");
				}
			} while (numimpar % 2 == 0);
			}
			
		else if (resposta == 3){
			printf("Encerrando programa...");
			sleep(1);
		}
		
		else{
			printf("Valor invalido! ");
			printf("\n Voltando ao menu principal...");
		}
		
		sleep(1);
		system("cls");
		} while (resposta != 3);
	printf("Programa encerrado");
	printf("\n A quantidade de numeros pares e de %d", contpar);
	printf("\n A quantidade de numeros impares e de %d", contimpar);
}
