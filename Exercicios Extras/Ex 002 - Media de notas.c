#include <stdio.h>

/*
Escreva um programa que pergunte ao usu�rio quantos alunos tem na sala dele.
Em seguida, atrav�s de um la�o while, pede ao usu�rio para que entre com as notas de todos os alunos da sala, um por vez.
Por fim, o programa deve mostrar a m�dia, aritm�tica, da turma.

*/

int main(){
	int alunos, 
		cont = 1;
		
	float nota, media;
	
	printf("Informe quantos alunos a sala possui: ");
	scanf("%d", &alunos);
	
	while (cont <= alunos){
		printf("Informe a media do aluno %d: ", cont);
		scanf("%f", &nota);
		media = media + nota;
		cont++;
	}
	
	printf("A media de notas dessa sala e de: %.2f", media/alunos);
	printf("\nFIM");
}
