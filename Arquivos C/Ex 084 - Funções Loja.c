#include<stdio.h>

/*
Escreva um programa que tenha uma fun��o que solicite ao usu�rio o nome de um produto, o 
pre�o desse produto e o valor em dinheiro entregue ao vendedor.Em seguida, deve ser mostrada 
uma mensagem baseada no seguinte exemplo:"Voc� comprou um produto (mouse) por R$ 185,00 e 
entregou ao vendedor R$ 200,00 em dinheiro. Voc� vai receber R$ 15,00 de troco. Volte sempre!
*/

/* Prototipo de Fun��es */
int nome_produto();
int preco_produto();
int valor_entregue();
int main();

/* Variaveis Globais */
char nome[30];
float preco, valor, troco;

/* Declara��o de Fun��es */
int compra(){
	printf("Informe o nome do produto: ");
	scanf("%s", nome);
	printf("Informe o preco do produto: ");
	scanf("%f", &preco);
	printf("Informe o valor entregue: ");
	scanf("%f", &valor);
	
	troco = valor - preco;
	
	return 0;
}

int main(){
	compra();
	
	printf("Voce comprou um produto (%c) por R$ %.2f e entregou ao vendedor R$ %.2f em dinheiro.\nVoce vai receber R$ %.2f de troco. Volte sempre!", nome, preco, valor, troco);
}
