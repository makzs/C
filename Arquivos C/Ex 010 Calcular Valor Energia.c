#include <stdio.h>

/* Antes do racionamento de energia ser decretado, quase ninguém falava em quilowatts;
 mas,agora, todos incorporaram essa palavra em seu vocabulário. Sabendo-se que 100 quilowatts
de energia custa um sétimo do salário mínimo, escreva um algoritmo que receba o valor
do salário mínimo e a quantidade de quilowatts gasta por uma residência e mostre na tela:
a) o valor em reais de cada quilowatt
b) o valor total a ser pago. */

int main()
{
	float salario, gasto, valor_unico, valor_total;
	
	printf("Informe o salario minimo: ");
	scanf("%f", &salario);
	
	printf("Informe o gasto em quilowatts da residencia: ");
	scanf("%f", &gasto);
	
	valor_unico = (salario / 7) / 100;
	valor_total = gasto * valor_unico;
	
	printf("O valor em reais de cada quilowatt e de: R$ %.2f", valor_unico);
	printf("O valor em reais do total a ser pago e de: R$ %.2f", valor_total);
}
