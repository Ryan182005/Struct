#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  struct dados_usuarios
  {
    char nome[200];
    char rg[200];
    char cpf[200];
    char dataN[200];
  };
    struct dados_usuarios dados[5];
    int i;

  for (i = 0; i < 5; i++)
  {
    printf("Digite o nome do %d° usuario: ", i + 1);
    gets(dados[i].nome);

    printf("Digite o RG do %d° usuario: ", i + 1);
    gets(dados[i].rg);

    printf("Digite o CPF do %d° usuario: ", i + 1);
    gets(dados[i].cpf);

    printf("Digite a data de nascimento do %d° usuario: ", i + 1);
    gets(dados[i].dataN);

    printf("\n\n");
  }

  printf("Exibindo dados...\n\n");

  for (i = 0; i < 5; i++)
  {
    printf("Nome do %d° usuario: %s\n", i + 1, dados[i].nome);
    printf("RG do %d° usuario: %s\n", i + 1, dados[i].rg);
    printf("CPF do %d° usuario: %s\n", i + 1, dados[i].cpf);
    printf("Data de nascimento do %d° usuario: %s\n", i + 1, dados[i].dataN);
    printf("\n\n");
  }
  
  
  return 0;
}