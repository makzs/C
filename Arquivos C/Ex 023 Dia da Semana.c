#include <stdio.h>

/* Escreva um algoritmo que leia um inteiro entre 1 e 7 e imprima o dia da semana
 correspondente a este numero, ou seja, “domingo” se 1, “segunda-feira” se 2,
  e assim por diante. Apresente a mensagem “Número inválido!” caso o número digitado
 não seja inteiro entre 1 e 7. */
 
 int main(){
 	
 	int valor;
 	
 	printf("Informe o numero que indica o dia da semana: (1/7) ");
 	scanf("%d", &valor);
 	
 	switch (valor) {
 		case 1:
 			printf("Domingo");
 			break;
 		case 2:
 			printf("Segunda-feira");
 			break;
 		case 3:
 			printf("Terca-feira");
 			break;
 		case 4:
 			printf("Quarta-feira");
 			break;
 		case 5:
 			printf("Quinta-feira");
 			break;
 		case 6:
 			printf("Sexta-feira");
 			break;
 		case 7:
 			printf("Sabado");
 			break;
 		default:
 			printf("Valor invalido!");
	 }
 }
