#include<stdio.h>
#include<string.h>

/*
Um hospital local est� fazendo uma campanha para receber doa��o de sangue.
O propenso doador deve inicialmente se cadastrar informando o seu primeiro nome, 
sua idade, seu peso, responder a um breve question�rio e apresentar um documento oficial com foto.
Fa�a um programa que permita ao hospital avaliar a aptid�o de um volunt�rio quanto � doa��o de sangue.
Para estar apto a doar sangue, o volunt�rio deve ter idade entre 16 e 69 anos, 
pesar pelo menos 50kg, estar bem alimentado e n�o estar resfriado.O programa deve ler os dados e 
imprimir no final o nome do volunt�rio e se ele est� apto ou n�o.
*/

int main(){
	char nome[100]; 
	char resp1[50];
	char resp2[50];
	int idade, peso, i;
	
	printf("------------HOSPITAL------------\n\n");
	printf("Doacao De Sangue\n");
	printf("CADASTRO\n");
	
	printf("Informe seu primeiro nome: ");
	scanf("%[^\n]", nome);
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	printf("Informe seu peso: ");
	scanf("%d", &peso);
	
	printf("Voce apresenta sintomas de resfriado? (S/N) ");
	scanf("%s", &resp1);
	
	printf("Voce esta se alimentando bem? (S/N) ");
	scanf("%s", &resp2);
	
	printf("\nAnalisando Cadastro...\n");
	sleep(2);
	
	if(idade>16 && idade<69){
		if(peso>=50){
			for(i=0;resp1[i] != '\0';i++){	
				if(resp1[i] == 'N'){
					for(i=0;resp1[i] != '\0';i++){
						if(resp2[i] == 'S'){
							printf("Voce esta apto para doar sangue %s!", nome);
							printf("\nPara progredir com seu cadastro nos envie uma foto de seu Documento...");
							sleep(1);
							break;
						}
						else{
							printf("Voce nao esta apto para doar sangue devido a sua alimentacao!");
							sleep(1);
						}
					}
				}
				else{
					printf("Voce nao esta apto para doar sangue devido ao seus sintomas!");
					sleep(1);
				}
			}
		}
		else{
			printf("Voce nao esta apto para doar sangue devido ao seu peso!");
			sleep(1);
		}
	}
	else{
		printf("Voce nao esta apto para doar sangue devido a sua idade!");
		sleep(1);
	}
	
	printf("\nPrograma encerrado!");
	return 0;
}
