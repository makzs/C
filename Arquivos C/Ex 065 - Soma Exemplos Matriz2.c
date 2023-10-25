#include<stdio.h>

/*
 Escreva um programa que declare e inicialize uma matriz M de 4 x 4 elementos, que representa a distância
 em km de 4 cidades entre si. Em seguida, leia o código (índice) de 2 cidades e apresente a distância entre 
 elas. Por exemplo, entre as cidades 1 e 3,existe uma distância de 30 km.
 matriz:
 00 10 08 20
 10 00 25 30
 08 25 00 12
 20 30 12 00
 */
 
 int main(){
 	int i, j, cidadeA, cidadeB, distancia,
	 M[4][4] = 
	 {0, 10, 8, 20,
	 10, 0, 25, 30,
	 8, 25, 0, 12,
	 20, 30, 12, 0},
	 cont = 0;
 	
 	printf("------------Cidade Matriz------------\n");
 	
 	for(i=0;i<4;i++){
 		for(j=0;j<4;j++){
 			printf("%d ", M[i][j]);
		 }
		 printf("\n");
	 }
	 
	 printf("------------Calculadora de Distancia Entre Cidades------------\n");
	 printf("Informe a primeira cidade: ");
	 scanf("%d", &cidadeA);
	 printf("\nInforme a segunda cidade: ");
	 scanf("%d", &cidadeB);
	 
	 printf("\nCalculando Distancia...");
	 sleep(1);
	 
	 for(i=0;i<4;i++){
 		for(j=0;j<4;j++){
 			if(M[cidadeA][cidadeB] == M[i][j]){
 				distancia = M[i][j];
 				}
		 }
	 }
	 
	 printf("\nA distancia entre as cidades e de: %d", distancia);
	 printf("\nFim do programa...");
	 return(0);
	 
 }
