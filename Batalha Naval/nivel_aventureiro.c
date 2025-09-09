// Desafio Batalha Naval - Nível Aventureiro
#include <stdio.h>
#define N 10

int main() {
    int tabuleiro[N][N] = {0};

    // Navio vertical
    for (int i = 2; i < 6; i++) tabuleiro[i][3] = 3;

    // Navio horizontal
    for (int j = 4; j < 8; j++) tabuleiro[7][j] = 3;

    // Navio diagonal principal
    for (int i = 0; i < 4; i++) tabuleiro[i][i] = 3;

    // Navio diagonal secundária
    for (int i = 0; i < 4; i++) tabuleiro[i][N-1-i] = 3;

    // Exibir tabuleiro completo
    printf("=== Tabuleiro 10x10 ===\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}