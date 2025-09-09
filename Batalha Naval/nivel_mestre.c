// Desafio Batalha Naval - Nível Mestre
#include <stdio.h>

#define M 5

void mostrarMatriz(int matriz[M][M]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int cone[M][M] = {0};
    int cruz[M][M] = {0};
    int octaedro[M][M] = {0};

    // Cone
    cone[0][2] = 1;
    cone[1][1] = cone[1][2] = cone[1][3] = 1;
    for (int j = 0; j < M; j++) cone[2][j] = 1;

    // Cruz
    for (int j = 0; j < M; j++) cruz[2][j] = 1;
    for (int i = 0; i < M; i++) cruz[i][2] = 1;

    // Octaedro
    octaedro[0][2] = 1;
    octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    octaedro[2][2] = 1;
    octaedro[3][2] = 1;

    printf("=== Cone ===\n");
    mostrarMatriz(cone);

    printf("=== Cruz ===\n");
    mostrarMatriz(cruz);

    printf("=== Octaedro ===\n");
    mostrarMatriz(octaedro);

    return 0;
}