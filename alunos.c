#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char nome[50];
	int matricula;
	int nota;
}Aluno;

Aluno *ficha(int n){
	Aluno *alunos = (Aluno*)malloc(n * sizeof(Aluno));
	for(int i = 0; i < n; i++){
		printf("digite o nome do aluno %i:\n", i);
		scanf("%s",alunos[i].nome);
		printf("digite a matricula do aluno %i:\n", i);
		scanf("%i",&alunos[i].matricula);
		printf("digite a nota do aluno %i:\n", i);
		scanf("%i",&alunos[i].nota);
	}
	return alunos;
}


void maior_menor(Aluno *alunos, int n){
	int maior = alunos[0].nota;
	int menor = alunos[0].nota;
	int contamaior = 0,contamenor = 0;
	for(int i = 1; i < n;i++){
		if(alunos[i].nota > maior){
			maior = alunos[i].nota;
		       contamaior++;	
		}
	}
	printf("nome: %s\nmatricula:%i\nobteve a maoir nota:%i\n",alunos[contamaior].nome,alunos[contamaior].matricula,alunos[contamaior].nota); 

	for(int i = 1; i < n;i++){
		if(alunos[i].nota <  menor){
			menor = alunos[i].nota;
		       contamenor++;	
		}
	}
	printf("nome: %s\nmatricula:%i\nobteve a maoir nota:%i\n",alunos[contamenor].nome,alunos[contamenor].matricula,alunos[contamenor].nota); 
	
}
int turma(int n){
	printf("digite a quantidade de alunos na turma\n");
	scanf("%i",&n);
	return n;
}
int main (){
	Aluno *alunos;
	int numero_de_alunos;	
	numero_de_alunos = turma(numero_de_alunos);
	alunos = ficha(numero_de_alunos);
	maior_menor(alunos,numero_de_alunos);
	free(alunos);
	return 0;


}

