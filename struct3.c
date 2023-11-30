#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  struct dados_pessoa
  {
    char nome[300];
    int idade;
    char endereco[999];
  };
  
  struct dados_pessoa pessoa;

  printf("Pedindo dados ao usuario...\n\n");

  printf("Digite o seu nome: ");
  gets(pessoa.nome);
  printf("Digite a sua idade: ");
  scanf("%d", &pessoa.idade);
  fflush(stdin);
  printf("Digite o seu endereço: ");
  gets(pessoa.endereco);


  printf("\n\nExibindo os dados do usuario...\n\n");

  printf("Nome: %s\n", pessoa.nome);
  printf("Idade: %d\n", pessoa.idade);
  printf("Endereço: %s\n", pessoa.endereco);
  return 0;
}