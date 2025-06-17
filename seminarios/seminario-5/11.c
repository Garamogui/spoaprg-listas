// Exercício 11 - Média das linhas de uma matriz 4x4

#include <stdio.h>

void mediaLinhas(int *m, float *medias) {
    for (int i = 0; i < 4; i++) {
        int soma = 0;
        for (int j = 0; j < 4; j++) {
            soma += *(m + i * 4 + j);
        }
        medias[i] = soma / 4.0;
    }
}

int main() {
    int m[4][4];
    float medias[4];

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &m[i][j]);

    mediaLinhas((int *)m, medias);

    for (int i = 0; i < 4; i++) {
        printf("Média da linha %d = %.2f\n", i, medias[i]);
    }

    return 0;
}