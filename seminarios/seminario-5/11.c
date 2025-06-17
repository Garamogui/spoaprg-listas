<<<<<<< HEAD
=======
// Exercício 11 - Média das linhas de uma matriz 4x4

>>>>>>> 5d55c315c8ed82e8cf72d1928f7e41cacc0625b0
#include <stdio.h>

void mediaLinhas(int *m, float *medias) {
    for (int i = 0; i < 4; i++) {
        int soma = 0;
        for (int j = 0; j < 4; j++) {
            soma += *(m + i * 4 + j); // Acessa o elemento da matriz
        }
        medias[i] = soma / 4.0; // Calcula a média
    }
}

int main() {
    int m[4][4]; // Declaração da matriz 4x4
    float medias[4]; // Array para armazenar as médias

    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &m[i][j]);

    // Chama a função para calcular as médias
    mediaLinhas((int *)m, medias);

    // Exibe as médias das linhas
    for (int i = 0; i < 4; i++) {
        printf("Média da linha %d = %.2f\n", i, medias[i]);
    }

    return 0;
}
