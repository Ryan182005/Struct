#include <stdio.h>
#include <stdlib.h>

int main(){

 struct dados_aluno
 {
   char nome[200];
   int idade;
 };

 struct dados_professor
 {
   char nome[200];
   int matricula;
 };
 
 
  struct dados_aluno aluno;
  struct dados_professor professor;

  printf("Solicitando dados do aluno...\n");
  printf("Digite o nome do aluno: ");
  gets(aluno.nome);

  printf("Digite a idade do aluno: ");
  scanf("%d", &aluno.idade);

  fflush(stdin);

  printf("\nSolicitando dados do professor...\n");
  printf("Digite o nome do professor: ");
  gets(professor.nome);

  printf("Digite a matricula do professor: ");
  scanf("%d", &professor.matricula);

  

  printf("\nExibindo dados do aluno...\n");

  printf("\nNome do aluno: %s\n", aluno.nome);
  printf("Idade do aluno: %d\n", aluno.idade);

  printf("\nExibindo dados do professor...\n");

  printf("\nNome do professor: %s\n", professor.nome);
  printf("Idade do professor: %d\n", professor.matricula);
  return 0;
}