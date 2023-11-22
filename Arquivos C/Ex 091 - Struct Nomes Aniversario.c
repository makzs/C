#include<stdio.h>

/*
Dados os seguintes campos de um registro: nome, data de aniversário (dia, mês e ano).
Desenvolver um programa em C que liste os meses do ano, e para cada mês, as pessoas que
fazem aniversário e suas respectivas idades.Pedir ao usuário a data de hoje.
Considere um conjunto de 20 pessoas.
*/

/* Definição de structs */
/* qta_pessoas 20 */
typedef struct{
	int dia, mes, ano;
}DATA;

typedef struct{
	char nome[30];
	int dia, mes, ano
}PESSOA;

/* Prototipo de Funções */
DATA solicitaDataAtual();
int listaGeral(DATA d, PESSOA p[20]);
int listaAniversariantesMes(int m, DATA d, PESSOA p[20]);

/* Declaração de Funções */
/* recebe datas de aniversario */
DATA solicitaDataAtual(){
	DATA d;
	printf("Entre com a data atual:");
	printf("\nDia: ");
	scanf("%d", &d.dia);
	printf("Mes: ");
	scanf("%d", &d.mes);
	printf("Ano: ");
	scanf("%d", &d.ano);
	
	return d;
}

/* lista dos do mes com as pessoas */
int listaGeral(DATA d, PESSOA p[20]){
	int i;
	for(i=1;i<=12;i++){
		listaAniversariantesMes(i, d, p);
		printf("\n");
		
	}
	return 0;
}

/* lista dos meses */
int listaAniversariantesMes(int m, DATA d, PESSOA p[20]){
	int i, cont=0;
	
	switch(m){
		case 1: printf("\nJANEIRO: "); break;
		case 2: printf("\nFEVEREIRO: "); break;
		case 3: printf("\nMARCO: "); break;
		case 4: printf("\nABRIL: "); break;
		case 5: printf("\nMAIO: "); break;
		case 6: printf("\nJUNHO: "); break;
		case 7: printf("\nJULHO: "); break;
		case 8: printf("\nAGOSTO: "); break;
		case 9: printf("\nSETEMBRO: "); break;
		case 10: printf("\nOUTUBRO: "); break;
		case 11: printf("\nNOVEMBRO: "); break;
		case 12: printf("\nDEZEMBRO: "); break;
	}
	
	for (i = 0; i < 20; i++){
		if(p[i].mes == m){
			int idade = d.ano - p[i].ano;
			cont++;
			printf("\n%d - %s, com %d anos!", cont, p[i].nome, idade);
		}
	}
	
	if(cont==0){
		printf("\nSem aniversariantes para esse mes!");
		
	}
	
	return 0;
}

/* Função Principal */
int main(){
	PESSOA pessoas[20] =	{ 	"Maria Santi",      10, 12, 1943,
								"Flavio Silva",     23, 10, 1951,
								"Roberto Oliveira",  8, 3, 1989,
								"Fabricio Olivo",   29, 9, 1972,
								"Albo Marcato",     15, 9, 2012,
								"Bernardo Santos",   4, 9, 2002
							};
	DATA dataAtual;
	
	dataAtual = solicitaDataAtual();
	
	listaGeral(dataAtual, pessoas);
	
	return 0;
}
