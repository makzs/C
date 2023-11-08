#include<stdio.h>

/*
Crie uma estrutura com o código e a quantidade em estoque de 5 produtos. Em seguida, leia um pedido composto por um 
código de produto e quantidade. Se houver quantidade suficiente para atender ao pedido integralmente, atualize a 
quantidade em estoque do produto e apresente amensagem "Estoque atualizado", caso contrário, apresente a mensagem 
"Quantidade insuficiente em estoque"
*/

typedef struct{
	int codigo;
	int quantidade;
}produtos;


int main(){
	int i, pedido, Quantidade;
	produtos estoque[5] =	{
								{1, 200},
								{2, 500},
								{3, 1000},
								{4, 30},
								{5, 125}
							};
							
	printf("------ Estoque ------\n");
	printf("CODIGO --- QUANTIDADE\n");
	for(i=0;i<5;i++){
		printf("%d ---------- %d\n", estoque[i].codigo, estoque[i].quantidade);
	}
	
	printf("\n------ PEDIDO ------\n");
	
	printf("Informe o Codigo do produto desejado: ");
	scanf("%d", &pedido);
	
	printf("Informe quantidade desejada: ");
	scanf("%d", &Quantidade);
	
	printf("Procurando no estoque..");
	sleep(1);
	
	for(i=0;i<5;i++){
		if(estoque[i].codigo == pedido){
			if(estoque[i].quantidade >= Quantidade){
				estoque[i].quantidade -= Quantidade;
				printf("\nPedido realizado! Estoque atualizado");
				printf("\n\n------ ESTOQUE ATUALIZADO ------\n");
				printf("CODIGO --- QUANTIDADE\n");
				for(i=0;i<5;i++){
					printf("%d ---------- %d\n", estoque[i].codigo, estoque[i].quantidade);
				}
				break;
			}
			else{
				printf("\nQuantidade insuficiente em estoque");
				break;
			}
			
		}
	}
	
	printf("\nFim");
	return 0;
}
