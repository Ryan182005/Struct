#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  struct dados_alunos
  {
    char nome[300];
    int idade;
    float notas[2];
    float somaN;
    float medias;
  };
  
  struct dados_alunos alunos[3];
  int i, j;

  for (i = 0; i < 3; i++)
  {
    printf("Digite o nome do %d° aluno: ", i + 1);
    gets(alunos[i].nome);
    printf("Digite a idade do aluno: ");
    scanf("%d", &alunos[i].idade);
    for (j = 0; j < 2; j++)
    {
      printf("Digite a %d° nota: ", j + 1);
      scanf("%f", &alunos[i].notas[j]);

    alunos[i].somaN += alunos[i].notas[j];
    }
    alunos[i].medias = alunos[i].somaN / 2;
    alunos[i].somaN = 0;
    fflush(stdin);
    printf("\n");
  }
  
  printf("\n\nExibindo resultados...\n\n");

  for (i = 0; i < 3; i++)
  {
    printf("Nome do %d° aluno: %s\n", i + 1, alunos[i].nome);
    printf("Idade do aluno: %d\n", alunos[i].idade);
    for (j = 0; j < 2; j++)
    {
      printf("%d° nota: %.1f\n", j + 1, alunos[i].notas[j]);
    }
    printf("Media do aluno: %.1f", alunos[i].medias);
    printf("\n\n");
  }
  

  return 0;
}