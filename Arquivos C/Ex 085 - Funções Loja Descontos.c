#include<stdio.h>

/*
Escreva um programa que tenha uma fun��o que solicite ao usu�rio o nome de um produto, o 
pre�o desse produto e o valor em dinheiro entregue ao vendedor.Em seguida, deve ser mostrada 
uma mensagem baseada no seguinte exemplo:�Voc� comprou um produto (mouse) por R$ 185,00 e 
acaba de ganhar um desconto de 10%. Assim voc� vai pagar apenas R$ 166,50 pelo seu produto. 
Volte sempre!�
*/

/* Prototipo de Fun��es */
int nome_produto();
int preco_produto();
int valor_entregue();
int main();

/* Variaveis Globais */
char nome[30];
float preco, valor, troco, desconto;

/* Declara��o de Fun��es */
int compra(){
	printf("Informe o nome do produto: ");
	scanf("%s", nome);
	printf("Informe o preco do produto: ");
	scanf("%f", &preco);
	printf("Informe o valor entregue: ");
	scanf("%f", &valor);
	
	desconto = (preco * 10) / 100;
	troco = valor - (preco - desconto);
	
	return 0;
}

int main(){
	compra();
	
	printf("Voce comprou um produto (%c) por R$ %.2f e acaba de ganhar um desconto de 10%%.\nAssim voce vai pagar apenas R$ %.2f pelo seu produto. Volte sempre!", nome, preco, preco-desconto);
}
