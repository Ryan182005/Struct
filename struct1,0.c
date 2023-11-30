#include <stdio.h>
#include <stdlib.h>

int main(){

 struct dados_aluno
 {
   char nome[200];
   int idade;
   float somaN;
   float media;
 };
  int i;
   float nota;
  
 
  struct dados_aluno aluno;


  printf("Solicitando dados do aluno...\n");
  printf("Digite o nome do aluno: ");
  gets(aluno.nome);

  printf("Digite a idade do aluno: ");
  scanf("%d", &aluno.idade);

  for ( i = 0; i < 2; i++)
  {
    printf("Digite uma nota: ");
    scanf("%f", &nota[i]);

    aluno.somaN += nota[i];
  }
  
  aluno.media = aluno.somaN / 2;
  

  printf("\nExibindo dados do aluno...\n");

  printf("\nNome do aluno: %s\n", aluno.nome);
  printf("Idade do aluno: %d\n", aluno.idade);
  for (i = 0; i < 2; i++)
  {
    printf("%d° nota: %.1f\n", i + 1, nota[1]);
  }
  printf("Media: %.1f", aluno.media);
  return 0;
}