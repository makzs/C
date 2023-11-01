#include<stdio.h>

/*
Escreva uma fun��o que receba um s�mbolo e dois n�meros. O s�mbolo representa a opera��o que se deseja 
efetuar com os n�meros (soma, subtra��o, multiplica��o ou divis�o).
*/

/* Prototipo de Fun��es */
int soma(num1, num2);
int subtracao(num1, num2);
int multiplicacao(num1, num2);
int divisao(num1, num2);

/* Declara��o das Fun��es */
int soma(num1, num2){
	int s;
	
	s = num1 + num2;
	
	return s;
}

int subtracao(num1, num2){
	int s;
	
	s = num1 - num2;
	
	return s;
}

int multiplicacao(num1, num2){
	int p;
	
	p = num1 * num2;
	
	return p;
}

int divisao(num1, num2){
	int q;
	
	q = num1 / num2;
	
	return q;
}

int linha(quantidade){
	int i;
	
	for(i=0;i<=quantidade;i++){
		printf("-");
	}
}

/* Declara a Fun��o Principal */
int main(){
	/* Variaveis */
	char resp;
	int valor1, valor2;
	
	/* Tela inicial */
	linha(12);
	printf("\nCALCULADORA DE DOIS NUMEROS\n");
	linha(12);
	
	/* Entrada de valores */
	printf("\nInforme o primeiro valor: ");
	scanf("%d", &valor1);
	
	printf("\nInforme o segundo valor: ");
	scanf("%d", &valor2);
	
	/* Entrada de tipo opera��o */
	printf("\nInforme a operacao a ser realizada: [+ - * /] \n");
	scanf("%s", &resp);
	
	printf("\nCalculando...");
	sleep(1);
	
	/* Estruturas condicionais */
	/* Soma */
	if(resp == '+'){
		printf("\n\nA soma entre %d e %d e igual a: %d", valor1, valor2, soma(valor1, valor2));
	}
	
	/* Subtra��o */
	else if(resp == '-'){
		printf("\n\nA subtracao entre %d e %d e igual a: %d", valor1, valor2, subtracao(valor1, valor2));
	}
	
	/* Multiplica��o */
	else if(resp == '*'){
		printf("\n\nA multiplicacao entre %d e %d e igual a: %d", valor1, valor2, multiplicacao(valor1, valor2));
	}
	
	/* Divis�o */
	else if(resp == '/'){
		printf("\n\nA divisao entre %d e %d e igual a: %d", valor1, valor2, divisao(valor1, valor2));
	}
	
	else{
		printf("Simbolo invalido!");
	}
	
	printf("\nFIM\n");
	
	}
