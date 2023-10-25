#include<stdio.h>

/*
Altere o programa da atividade 4 para apresentar no fim da lista o nome do vendedor com maior valor médio devendas.
*/

int main(){
	/*Exercicio 2 nomear funcionarios*/
	char funcionario_1[30] = "Jose";
	char funcionario_2[30] = "Matheus";
	char funcionario_3[30] = "Maria";
	char funcionario_4[30] = "Lucas";
	char funcionario_5[30] = "Roberta";
	/* variaveis */
	int i, j, i2, j2, cont = 0, contvenda = 1, media = 0, maiormedia = 0,
	/* Exercicio 1 array dos funcionarios*/
	funcionarios[3][2] = 
	{ funcionario_1, funcionario_2, funcionario_3,
	  funcionario_4, funcionario_5, '/0'},
	/* Exercicio 3 array codigos de funcionarios*/
	codigos[3][2] = 
	{ 01, 02, 03,
	  04, 05, '/0'},
	  /* Exercicio 4 array vendas de funcionarios */
	Vendas[5][4] = 
	{ 300, 50, 120, 350,
	  500, 750, 110, 80,
	  900, 150, 230, 400,
	  130, 450, 150, 160,
	  900, 180, 120, 420 },
	maior_funcionario[1][1];
	
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
			printf("\nFuncionario: ID:%d Nome:%s\n", codigos[i][j], funcionarios[i][j]);
			printf("Vendas:\n");
			for(i2=cont;i2<5;i2++){
				for(j2=0;j2<4;j2++){
					printf("Venda %d: R$%d.00 ", contvenda, Vendas[i2][j2]);
					contvenda++;
					if(j2==3){
						contvenda = 1;
						break;
					}
				}
				printf("\n");
				break;
			}
			sleep(2);
			cont++;
			if(i2==4){
				break;
			}
		}
	}
	
	for(i2=0;i2<5;i2++){
		for(j2=0;j2<4;j2++){
			media+= Vendas[i2][j2];
			if(j2==3){
				if(i2==0){
					maiormedia = media/4;
					maior_funcionario[0][0] = funcionario_1;
				}
				else{
					if(maiormedia<media/4){
						maiormedia = media/4;
						if(i2==1){
							maior_funcionario[0][0] = funcionario_2;
						}
						else if(i2==2){
							maior_funcionario[0][0] = funcionario_3;
						}
						else if(i2==3){
							maior_funcionario[0][0] = funcionario_4;
						}
						if(i2==4){
							maior_funcionario[0][0] = funcionario_5;
						}
					}
				}
			media = 0;
			}
		}
	}
	
	printf("\nO funcionario com destaque nas vendas e: %s! com R$%d.00 de media de vendas", maior_funcionario[0][0], maiormedia);
	return(0);
}
