#include <stdio.h> 

int main() {

  char nome[36];
  char genero;
  int idade = 0;
  float prova1 = 0.0f;
  float prova2 = 0.0f;
  float media;

  printf("Digite o nome do aluno: ");
  scanf("%[^\n]s", nome);  
 
  printf("Digite a idade do aluno:");
  scanf("%i", &idade);
  
  printf("Digite a nota da primeira prova:");
  scanf("%f", &prova1);
  
  printf("Digite a nota da segunda prova:");
  scanf("%f", &prova2);

  do { 
  
    printf("Digite o gênero: ");
    scanf(" %c", &genero);
  
    if (genero != 'F' && genero != 'M') {
      printf("Gênero inválido. Tente novamente.\n");
    }    
  
  } while (genero != 'F' && genero != 'M');
   
  //calculo da média 
  media = (prova1 + prova2) / 2;
  
  printf("\nNome do aluno: %s\n", nome);
  printf("Idade do aluno: %i\n", idade);
  printf("Media das notas: %.1f\n", media);
  printf("Gênero: %c\n", genero);
   
  return 0;
}