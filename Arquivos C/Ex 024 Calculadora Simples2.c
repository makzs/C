#include <stdio.h>

/* Escreva um algoritmo que mostre ao usuário um menu com 4 opções de operações matemáticas,
 as mais básicas, peça dois valores numéricos, realize o cálculo, e mostre o resultado na tela.
 Lembre-se que divisão por zero não é possível */
 
 int main(){
 	int x, y, resultado;
 	char resposta;
 	
 	printf("Que operação deseja realizar? (+ - * /) ");
 	scanf("%c", &resposta);
 	
 	switch (resposta) {
 		case '+':
 			printf("Informe o primeiro valor: ");
 			scanf("%d", &x);
 			printf("Informe o segundo valor: ");
 			scanf("%d", &y);
 			resultado = x + y;
 			printf("A soma dos dois valores e igual a: %d", resultado);
 			break;
 		case '-':
 			printf("Informe o primeiro valor: ");
 			scanf("%d", &x);
 			printf("Informe o segundo valor: ");
 			scanf("%d", &y);
 			resultado = x - y;
 			printf("A subtracao dos dois valores e igual a: %d", resultado);
 			break;
 		case '*':
 			printf("Informe o primeiro valor: ");
 			scanf("%d", &x);
 			printf("Informe o segundo valor: ");
 			scanf("%d", &y);
 			resultado = x * y;
 			printf("A multiplicacao dos dois valores e igual a: %d", resultado);
 			break;
 		case '/':
 			int zero;
 			printf("Informe o primeiro valor: ");
 			scanf("%d", &x);
 			printf("Informe o segundo valor: ");
 			scanf("%d", &y);
 			zero = (x == 0) || (y == 0);
 			if (zero == 0){
			  	resultado = x / y;
 				printf("A divisao dos dois valores e igual a: %d", resultado);
 				break; 				
			 }
			else{
				printf("Nao e possivel realizar a divisao com valor 0");
				break;
			}
 		default:
 			printf("Resposta invalida! Encerrando programa...");
	 }
 }
