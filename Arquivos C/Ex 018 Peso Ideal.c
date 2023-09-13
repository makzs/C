#include <stdio.h>

/* Tendo como dados de entrada a altura e o gênero de uma pessoa,
 construa um algoritmo que calcule o seu peso ideal, de acordo com as seguintes fórmulas: 
 - Para homens: 72.7 x altura – 58
 - Para mulheres: 62.1 x altura - 44.7
 Em seguida, transcreva para a linguagem C */
 
 int main(){
 	char resposta;
 	
 	printf("Informe o seu sexo [H/M]: ");
 	scanf("%c", &resposta);
 	
 	if (resposta == 'H'){
 		float altura, ideal;
 		printf("Informe sua altura: ");
 		scanf("%f", &altura);
 		
 		ideal = 72.7 * altura - 58;
 		
 		printf("Seu peso ideal e de: %.2f", ideal,"Kg");
	 }
	if (resposta == 'M'){
	 	float altura, ideal;
		 printf("Informe sua altura: ");
		 scanf("%f", &altura);
		 
		 ideal = 62.1 * altura -44.7;
		 
		 printf("Seu peso ideal e de: %.2f", ideal,"Kg");
	 }
	else{
		printf("Sexo invalido");
	}
 }
