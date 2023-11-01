#include<stdio.h>

/*
Escreva uma fun��o que receba uma letra e 3 notas de um aluno. Se a letra for A, a fun��o deveretornar a m�dia aritm�tica das 
notas do aluno e se a letra for P, a fun��o deve retornar a sua m�diaponderada com os pesos 5, 3 e 2 respectivamente.
*/

/* Prototipo de Fun��es */
float mediaA(float nota1, float nota2, float nota3);
float mediaP(float nota1, float nota2, float nota3);
int main();

/* Declara Fun��o mediaA, media aritimetica */
float mediaA(float nota1, float nota2, float nota3){
	float resultado;
	
	resultado = (nota1 + nota2 + nota3) / 3;
	
	return resultado;
}

/* Declara Fun��o mediaP, media ponderada com os pesos 5, 3, 2 respectivamente */
float mediaP(float nota1, float nota2, float nota3){
	float resultado;
	
	resultado = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;
	
	return resultado;
}

/* Declara Fun��o Principal */
int main(){
	char resp;
	float valor1, valor2, valor3;
	
	/* Recebe as notas dos alunos */
	printf("---------Calculadora Media Ponderada ou Aritimetica---------\n");
	printf("Informe a primeira nota do aluno: ");
	scanf("%f", &valor1);
	printf("Informe a segunda nota do aluno: ");
	scanf("%f", &valor2);
	printf("Informe a terceira nota do aluno: ");
	scanf("%f", &valor3);
	
	/* Recebe o tipo de media a ser calculada */
	do{
		printf("\nInforme o tipo de media para calcular: (A/P) ");
		scanf("%s", &resp);
		
		/* Calcula Media Aritimetica */
		if(resp == 'A'){
			printf("A media Aritimetica das notas: \n%.2f\n%.2f\n%.2f\ne igual a: %.2f", valor1, valor2, valor3, mediaA(valor1, valor2, valor3));
			break;
		}
		
		/*Calcula Media Ponderada*/
		else if(resp == 'P'){
			printf("A media Ponderada das notas: \n%.2f\n %.2f\n %.2f\ne igual a: %.2f", valor1, valor2, valor3, mediaP(valor1, valor2, valor3));
			break;
		}
		
		/* Respota diferente de A ou P */
		else{
			printf("Resposta Invalida tente novamente!");
		}
	
	}while(resp != 'A' || resp != 'P');
}


