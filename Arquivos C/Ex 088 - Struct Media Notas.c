#include<stdio.h>

/*
Crie uma estrutura que represente um aluno de uma disciplina. Essa estrutura deve conter o nome do aluno, 
o nome da disciplina e as notas do aluno em duas provas. Inicialize os dados para dessa estrutura para seis 
alunos. Por fim, exiba o nome do aluno, o nome da disciplina e a média dos alunos com nota média igual 
ou superior à nota média da turma
*/

typedef struct Aluno{
	char disciplina[51];
	char nome[51];
	float nota1, nota2;
}tipo_aluno;

int main(){
	tipo_aluno aluno[5];
	float media;
	int i;
	
	for(i=0;i<5;i++){
		printf("Informe a Disciplina: ");
		scanf("%50s", aluno[i].disciplina);
		
		printf("Informe o Nome do Aluno: ");
		scanf("%50s", &aluno[i].nome);
		
		printf("Informe a nota 1: ");
		scanf("%f", &aluno[i].nota1);
		
		printf("Informe a nota 2: ");
		scanf("%f", &aluno[i].nota2);
		
		media = ( aluno[i].nota1 + aluno[i].nota2 ) / 2;
		
		printf("Disciplina: %s\n", aluno[i].disciplina);
		printf("Nome: %s\n", aluno[i].nome);
		printf("Media: %2.f\n", media);
	}
	
	return 0;
	
}
