#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");
  
  struct dados_usuario
  {
    char nome[200];
    int idade;
    float peso, altura;
  };
  
  struct dados_usuario usuario;
  

  printf("Pedindo dados ao usuario...\n\n");
  
  printf("Digite o seu nome: ");
  gets(usuario.nome);
  
  printf("Digite a sua idade: ");
  scanf("%d", &usuario.idade);
  
  printf("Digite o seu peso: ");
  scanf("%f", &usuario.peso);
  
  fflush(stdin);
  
  printf("Digite a sua altura: ");
  scanf("%f", &usuario.altura);


  printf("\n\nExibindo dados do usuario...\n\n");

  printf("Nome: %s\n", usuario.nome);
  printf("Idade %d\n", usuario.idade);
  printf("Peso: %.2f\n", usuario.peso);
  printf("Altura: %.2f\n", usuario.altura);

  return 0;
}