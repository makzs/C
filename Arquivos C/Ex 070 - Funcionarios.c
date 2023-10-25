#include<stdio.h>

/*
Escreva um programa em C que receba do teclado o nome completo de 5 funcionários de uma empresa, 
com até 30 caracteres cada nome, armazene em um array de identificador “FUNCIONARIOS”, e utilize 
estrutura de repetição para apresentar na tela uma lista numerada contendo o nome de todos os funcionários.
*/

int main(){
	char funcionario_1 [30];
	char funcionario_2 [30];
	char funcionario_3 [30];
	char funcionario_4 [30];
	char funcionario_5 [30];
	int i, j, cont = 1, 
	funcionarios[3][2] = 
	{ funcionario_1, funcionario_2, funcionario_3,
	  funcionario_4, funcionario_5, '/0'};
	
	printf("Cadastro de funcionarios: \n");
	
	printf("Informe o nome do 1 funcionario: ");
	scanf("%s", funcionario_1 );
	printf("Informe o nome do 2 funcionario: ");
	scanf("%s", funcionario_2);
	printf("Informe o nome do 3 funcionario: ");
	scanf("%s", funcionario_3);
	printf("Informe o nome do 4 funcionario: ");
	scanf("%s", funcionario_4);
	printf("Informe o nome do 5 funcionario: ");
	scanf("%s", funcionario_5);
	
	printf("\nLista de funcionarios:\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("Funcionario %d: %s\n", cont, funcionarios[i][j]);
			cont++;
		}
	}
}
