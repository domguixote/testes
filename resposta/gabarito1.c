#include <stdio.h>

int main() {
    char nome[50];     // Array de caracteres para armazenar o nome
    int idade;         // Variável para a idade do aluno
    float nota1, nota2, media;  // Variáveis para as notas e a média
    char genero;       // Variável para o gênero do aluno (M/F)

    // Entrada de dados
    printf("Digite o nome do aluno: ");
    scanf("%[^\n]s", nome);  // Lê o nome do aluno

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);  // Lê a idade do aluno

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);  // Lê a nota da primeira prova

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);  // Lê a nota da segunda prova

    // Repete até o usuário digitar 'F' ou 'M'
    do {
        // Solicita ao usuário para digitar o gênero
        printf("Digite o gênero (M/F): ");
        scanf(" %c", &genero);

        // Verifica se o gênero é inválido
        if (genero != 'F' && genero != 'M') {
            printf("Gênero inválido. Tente novamente.\n");
        }

    } while (genero != 'F' && genero != 'M'); // Continua até que seja digitado 'F' ou 'M'

    // Gênero válido

    // printf("Digite o gênero do aluno (M/F): ");
    // scanf(" %c", &genero);  // Lê o gênero do aluno (espaço antes de %c para ignorar enter anterior)

    // Cálculo da média
    media = (nota1 + nota2) / 2;

    // Saída de dados
    printf("\nNome do aluno: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Gênero: %c\n", genero);
    printf("Média das notas: %.2f\n", media);  // Exibe a média com 2 casas decimais

    return 0;
}
