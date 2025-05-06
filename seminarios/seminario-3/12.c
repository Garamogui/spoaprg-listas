/**********************************
7.  Calcule a determinante de uma matriz 3x3
**********************************/

#include <stdio.h>

int M[3][3];

int main() {
    // Leitura da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &M[i][j]);

    // Exibição da matriz
    printf("\nMatriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%5d", M[i][j]);
        printf("\n");
    }

    // Cálculo do determinante
    int det = M[0][0] * M[1][1] * M[2][2]
            + M[0][1] * M[1][2] * M[2][0]
            + M[0][2] * M[1][0] * M[2][1]
            - M[0][2] * M[1][1] * M[2][0]
            - M[0][1] * M[1][0] * M[2][2]
            - M[0][0] * M[1][2] * M[2][1];

    // Exibição do resultado
    printf("\nDeterminante da matriz: %d\n", det);

    return 0;
}
