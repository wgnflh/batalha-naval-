// Desafio Batalha Naval - Nível Novato
#include <stdio.h>

int main() {
    int tabuleiro[5][5] = {0};

    // Navio vertical
    int coluna_vertical = 2; 
    int inicio_vertical = 1;
    int tamanho_vertical = 3;

    printf("=== Navio Vertical ===\n");
    for (int i = 0; i < tamanho_vertical; i++) {
        printf("(%d, %d)\n", inicio_vertical + i, coluna_vertical);
        tabuleiro[inicio_vertical + i][coluna_vertical] = 1;
    }

    // Navio horizontal
    int linha_horizontal = 4;
    int inicio_horizontal = 0;
    int tamanho_horizontal = 4;

    printf("\n=== Navio Horizontal ===\n");
    for (int j = 0; j < tamanho_horizontal; j++) {
        printf("(%d, %d)\n", linha_horizontal, inicio_horizontal + j);
        tabuleiro[linha_horizontal][inicio_horizontal + j] = 1;
    }

    return 0;
}