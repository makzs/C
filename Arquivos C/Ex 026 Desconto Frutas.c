#include <stdio.h>

/*
Escreva um algoritmo para ler a quantidade (em kg) de morangos e a quantidade (em kg)
 de maças adquiridas e escreva o valor a ser pago pelo cliente
 
 Se o cliente comprar mais de 10 kg em frutas ou se o valor total da compra ultrapassar
  R$ 50,00,receberá ainda um desconto de 10% sobre este total.
  
Morango:
Até 5kg -> 6.50 por kg
Acima de 5kg -> 6.20 por kg

Maçã:
Até 5kg -> 3.80 por kg
Acima de 5kg -> 3.50 por kg
*/

int main(){
	float morango, maca, preco1, preco2, pagamento, desconto;
	
	printf("Informe a quantidade em Kg de morangos comprados: ");
	scanf("%f", &morango);
	
	printf("Informe a quantidade em Kg de macas compradas: ");
	scanf("%f", &maca);
	
	if (morango > 5) {
		preco1 = 6.20 * morango;
	}
	else {
		preco1 = 6.50 * morango;
	}
	
	if (maca > 5) {
		preco2 = 3.50 * maca;
	}
	else {
		preco2 = 3.80 * maca;
	}
	
	if (morango + maca >= 10 || preco1 + preco2 >= 50) {
		desconto = ((preco1 + preco2) * 10) / 100;
		pagamento = (preco1 + preco2) - desconto;
	}
	else {
		pagamento = preco1 + preco2;
	}
	
	printf("O valor total a se pagar e de: R$%.2f", pagamento);
}
