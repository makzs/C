#include<stdio.h>

/*
Altere o programa da atividade 2 para tamb�m declarar e inicializar um array de identificador �CODIGOS�, 
que armazene o c�digo de cada funcion�rio (n�mero inteiro positivo) sem pedir dados para o usu�rio, 
e utilize estrutura de repeti��o para apresentar na tela uma lista numerada contendo o c�digo e o nome 
de cada funcion�rio da empresa
*/

int main(){
	char funcionario_1 [30] = "Jose";
	char funcionario_2 [30] = "Matheus";
	char funcionario_3 [30] = "Maria";
	char funcionario_4 [30] = "Lucas";
	char funcionario_5 [30] = "Roberta";
	int i, j, 
	funcionarios[3][2] = 
	{ funcionario_1, funcionario_2, funcionario_3,
	  funcionario_4, funcionario_5, '/0'},
	codigos[3][2] = 
	{ 01, 02, 03,
	  04, 05, '/0'};
	
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
			printf("Funcionario: ID:%d Nome:%s\n", codigos[i][j], funcionarios[i][j]);
			sleep(1);
		}
	}
}
