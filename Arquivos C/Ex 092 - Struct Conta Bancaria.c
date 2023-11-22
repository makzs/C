#include<stdio.h>

/*
Escreva um programa que simule contas bancárias com as seguintes especificações:
• Ao iniciar o programa deverá ser criado uma estrutura para as contas bancárias contendo o número da conta, o nome do titular da conta e o saldo.
• Devem ser cadastrados 6 clientes diretamente no programa, com saldo inicial de 0.
• Crie um menu para o programa com as seguintes opções:
[1] Listagem de clientes
[2] Depósito
[3] Saque
[4] Fim
• Para cada depósito ou saque realizado, deverá ser mostrado o nome do titular e o saldo atualizado.
• O programa não deve permitir saques com valores superiores ao saldo atual do cliente, deveutilizar estruturas de repetição e modularização.
*/

/* Structs */
typedef struct{
	int Conta;
	char Nome[30];
	float saldo;
}CONTAS;

/* variavel global */
CONTAS usuarios[30] =	{   1, "Fabricio Silva", 0,
								2, "Evandro Pereira", 0,
								3, "Luciano Andrade", 0,
								4, "Rafael Luz", 0,
								5, "Adriana Maria", 0,
								6, "Eric lopez", 0
							};
	

/* Prototipo de Funções */
int linha();
int Menu();
int leitor();
int Lista();
int Deposito();
int Saque();

/* Declaração de Funções */
int linha(qtd){
	int i;
	 
	for(i=0;i<qtd;i++){
		printf("-");
	}
	
	return 0;
}

int Menu(){
	
	printf("\n[1] Listagem de Clientes");
	printf("\n[2] Deposito");
	printf("\n[3] Saque");
	printf("\n[4] Fim\n");
	
	return 0;
}

int leitor(){
	int resposta;
	
	do{
		printf("\nOpcao: ");
		scanf("%d", &resposta);
		switch(resposta){
			case 1: Lista(); break;
			case 2: Deposito(); break;
			case 3: Saque(); break;
			case 4: printf("Terminando programa..."); break;
			default : printf("Opcao Invalida!");
		}
	}while(resposta != 4);
}

int Lista(){
	
	int i;
	
	linha(20);
	printf("Lista de contas");
	linha(20);
	printf("\nID----NOME-------SALDO\n");
	for(i=0;i<6;i++){
		printf("%d - %s - %.2f", usuarios[i].Conta, usuarios[i].Nome, usuarios[i].saldo);
		printf("\n");
	}
	linha(20);
	
}

int Deposito(){
	int i, resposta;
	float vlrdeposito;
	
	linha(20);
	printf("\nDeposito Bancario\n");
	linha(20);
	printf("\nInforme o ID da conta que deseja depositar: ");
	scanf("%d", &resposta);
	linha(20);
	printf("\nInforme o valor que deseja depositar: ");
	scanf("%f", &vlrdeposito);
	for(i=0;i<6;i++){
		if(i+1 == resposta){
			usuarios[i].saldo += vlrdeposito;
			printf("Valor Depositado com Sucesso!");
			printf("\n%d - %s - %.2f", usuarios[i].Conta, usuarios[i].Nome, usuarios[i].saldo);
			sleep(1);
			system("cls");
			Menu();
		}
	}
}

int Saque(){
	int i, resposta;
	float vlrsaque;
	
	linha(20);
	printf("\nSaque Bancario\n");
	linha(20);
	printf("\nInforme o ID da conta que deseja sacar: ");
	scanf("%d", &resposta);
	linha(20);
	printf("\nInforme o valor do saque: ");
	scanf("%f", &vlrsaque);
	
	for(i=0;i<6;i++){
		if(i+1 == resposta){
			if(vlrsaque <= usuarios[i].saldo){
				usuarios[i].saldo -= vlrsaque;
				printf("Valor sacado com Sucesso!");
				printf("\n%d - %s - %.2f", usuarios[i].Conta, usuarios[i].Nome, usuarios[i].saldo);
				sleep(1);
				system("cls");
				Menu();
			}
			else{
				printf("Saldo Bancario Insuficiente");
				printf("\nVoltanto ao Menu Principal");
				sleep(2);
				system("cls");
				Menu();
				break;
			}
		}
	}
}

/* Função Principal */
int main(){
	
	linha(40);
	Menu();
	linha(40);
	
	leitor();
	system("cls");
	
	printf("\nPrograma finalizado!");
	
	return 0;
}
