#include<stdio.h>

/*
Escreva um programa que declare e inicialize dois vetores A e B de 10 elementos.
Após a leitura, crie uma matriz M de 10 linhas e 2 colunas e, utilizando uma estrutura
de repetição,copie para a primeira coluna da matriz os elementos do vetor A e para a 
segunda coluna da matrizos elementos do vetor B.Por fim, apresente a matriz na tela.
*/

int main(){
	int i, j,
	vetorA[1][10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, 
	vetorB[1][10] = {5, 15, 25, 35, 45, 55, 65, 75, 85, 95},
	M[10][2],
	contA = 0,
	contB = 0;
	
	printf("------Copia e Cola de Vetores em uma Matriz------\n");
	printf("\nVetor A:\n");
	for(j=0;j<10;j++){
		printf("%d ", vetorA[0][j]);
	}
	
	sleep(1);
	
	printf("\nVetor B:\n");
	for(j=0;j<10;j++){
		printf("%d ", vetorB[0][j]);
	}
	
	sleep(1);
	
	printf("\nColando Vetor A e Vetor B para uma matriz...\n");
	sleep(1);
	
	for(i=0;i<10;i++){
		for(j=0;j<2;j++){
			if(j==0){
				M[i][j] = vetorA[0][contA];
				contA++;
			}
			else if(j==1){
				M[i][j] = vetorB[0][contB];
				contB++;
			}
		}
	}
	
	printf("Matriz Contendo Vetor A e Vetor B:\n");
	for(i=0;i<10;i++){
		for(j=0;j<2;j++){
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	
	sleep(1);
	printf("Programa Finalizado.");
	return(0);
}
