#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL, "portuguese");

  struct dados_livro
  {
    char nome[300];
    char autor[300];
    char categoria[300];
    float preco;
    
  };
  
  struct dados_livro livro[3];
    int i;

  for (i = 0; i < 3; i++)
  {
    printf("Digite o nome do %d° livro: ", i + 1);
    gets(livro[i].nome);
    printf("Digite o nome do autor do %d° livro: ", i + 1);
    gets(livro[i].autor);
    printf("Digite a categoria do %d° livro: ", i + 1);
    gets(livro[i].categoria);
    printf("Digite o preço do %d° livro: ", i + 1);
    scanf("%f", &livro[i].preco);
    printf("\n\n");
    fflush(stdin);
  }
  
  printf("\n\nExibindo os resultados...\n\n");

  for (i = 0; i < 3; i++)
  {
    printf("Nome do %d° livro: %s\n", i + 1, livro[i].nome);
    printf("Nome do autor: %s\n", livro[i].autor);
    printf("Categoria do livro: %s\n", livro[i].categoria);
    printf("Preço do livro: %.2f\n\n", livro[i].preco);
  }
  

  return 0;
}