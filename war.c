#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

#define MAX_TERRITORIOS 5


// Estrutura que representa um TERRITÓRIO
typedef struct {
    char nome[30];     // Nome do TERRITÓRIO
    char cor[10];      // Cor do exército
    int tropas;        // Quantidade de tropas
} Territorio;

int main() {
    setlocale(LC_ALL, "Portuguese");
    SetConsoleOutputCP(CP_UTF8);

    Territorio territorios[MAX_TERRITORIOS]; // Vetor para armazenar os 5 TERRITÓRIOs

    printf("=== CADASTRAR TERRITÓRIOS ===\n");

    // Laço para entrada de dados dos TERRITÓRIOs
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\n'TERRITÓRIO' %d:\n", i + 1);

        // Entrada do nome do TERRITÓRIO
        printf("Digite o nome do TERRITÓRIO: ");
        scanf(" %[^\n]", territorios[i].nome);  // Lê até a quebra de linha

        // Entrada da cor do exército
        printf("Digite a cor do exército: ");
        scanf(" %[^\n]", territorios[i].cor);

        // Entrada da quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos dados cadastrados
    printf("\n=== TERRITÓRIOS REGISTRADOS ===\n");
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("\nTERRITÓRIO %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}