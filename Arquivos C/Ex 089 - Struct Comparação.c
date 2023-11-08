#include<stdio.h>

/*
Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura. 
Em seguida, leia os dados de 5 atletas. Calcule e exiba os nomes do atleta mais alto e do atleta mais velho
*/

typedef struct Atleta{
	char nome[51];
	char esporte[51];
	int idade;
	float altura;
}tipo_atleta;


int main(){
	tipo_atleta atleta[5];
	int i, velho, codigoM, codigoV;
	float maior;
	
	for(i=0;i<5;i++){
		printf("Informe o nome do Atleta: ");
		scanf("%50s", &atleta[i].nome);
		
		printf("Informe o esporte: ");
		scanf("%50s", &atleta[i].esporte);
		
		printf("Informe a idade: ");
		scanf("%d", &atleta[i].idade);
		
		printf("Informe a Altura: ");
		scanf("%f", &atleta[i].altura);
		
		if(i==0){
			velho = atleta[i].idade;
			maior = atleta[i].altura;
			codigoM = i;
			codigoV = i;
		}
		else if(velho < atleta[i].idade && maior < atleta[i].altura){
			velho = atleta[i].idade;
			maior = atleta[i].altura;
			codigoM = i;
			codigoV = i;
		}
		else if(velho < atleta[i].idade){
			velho = atleta[i].idade;
			codigoV = i;
		}
		else if(maior < atleta[i].altura){
			maior = atleta[i].altura;
			codigoM = i;
		}
		
		printf("\nAtleta Registrado!\n\n");
		
	}
	
	printf("O maior atleta registrado foi: %s com %.2f de altura\n", atleta[codigoM].nome, maior);
	printf("O atelta mais velho registrado foi: %s com %d anos de idade\n", atleta[codigoV].nome, velho);
	
	printf("FIM");
	return 0;
	
}
