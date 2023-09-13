#include <stdio.h>

/* Escreva um algoritmo que leia o número de litros abastecidos, o tipo de combustível
 (codificadocom 1 para álcool e 2 para gasolina), o preço do litro do combustível e apresente
  o valor a serpago pelo cliente
  
  Alcool: 
  Até 20 litros -> desconto de 3% por litro
  Acima de 20 litros -> desconto de 5% por litro
  
  Gasolina:
  Até 20 litros -> desconto de 3.5% por litro
  Acima de 20 litros -> desconto de 6% por litro 
*/

int main(){
	int tipo, acima;
	float abastecido, desconto, pagamento;
	
	printf("[1] Alcool");
	printf("\n[2] Gasolina");
	printf("\nInforme o tipo de combustivel desejado: ");
	scanf("%d", &tipo);
	
	switch (tipo){
		case 1:
			float alcool;
			printf("Informe o valor do alcool: ");
			scanf("%f", &alcool);
			printf("Informe a quantidade abastecida: ");
			scanf("%f", &abastecido);
			acima = (abastecido > 20);
			if (acima == 1) {
				desconto = ((alcool * abastecido) * 5) / 100;
				pagamento = (alcool * abastecido) - desconto;
				printf("O valor do pagamento com 5%% de desconto e de: %.2f", pagamento);
				break;
			}
			else{
				desconto = ((alcool * abastecido) * 3) / 100;
				pagamento = (alcool * abastecido) - desconto;
				printf("O valor do pagamento com 3%% de desconto e de: %.2f", pagamento);
				break;
			}
		case 2:
			float gasolina;
			printf("Informe o valor da gasolina: ");
			scanf("%f", &gasolina);
			printf("Informe a quantidade abastecida: ");
			scanf("%f", &abastecido);
			acima = (abastecido > 20);
			if (acima == 1) {
				desconto = ((gasolina * abastecido) * 6) / 100;
				pagamento = (gasolina * abastecido) - desconto;
				printf("O valor do pagamento com 6%% de desconto e de: %.2f", pagamento);
				break;
			}
			else {
				desconto = ((gasolina * abastecido) * 3.5) / 100;
				pagamento = (gasolina * abastecido) - desconto;
				printf("O valor do pagamento com 3.5%% de desconto e de: %.2f", pagamento);
				break;
			}
		default:
			printf("Opcao invalida! Encerrando programa...");
	}
}
