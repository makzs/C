#include<stdio.h>

/*
Altere o programa da atividade 1 para inicializar o array “FUNCIONARIOS”, 
sem pedir dados para o usuário, mantendo o código substituído em comentário, 
não o exclua
*/

int main(){
	char funcionario_1 [30] = "Jose";
	char funcionario_2 [30] = "Matheus";
	char funcionario_3 [30] = "Maria";
	char funcionario_4 [30] = "Lucas";
	char funcionario_5 [30] = "Roberta";
	int i, j, cont = 1, 
	funcionarios[3][2] = 
	{ funcionario_1, funcionario_2, funcionario_3,
	  funcionario_4, funcionario_5, '/0'};
	
	/*printf("Cadastro de funcionarios: \n");
	
	printf("Informe o nome do 1 funcionario: ");
	scanf("%s", funcionario_1 );
	printf("Informe o nome do 2 funcionario: ");
	scanf("%s", funcionario_2);
	printf("Informe o nome do 3 funcionario: ");
	scanf("%s", funcionario_3);
	printf("Informe o nome do 4 funcionario: ");
	scanf("%s", funcionario_4);
	printf("Informe o nome do 5 funcionario: ");
	scanf("%s", funcionario_5); */
	
	printf("\nLista de funcionarios:\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("Funcionario %d: %s\n", cont, funcionarios[i][j]);
			cont++;
		}
	}
}
