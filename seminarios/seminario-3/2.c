/**********************************
2. Dadas duas matrizes reais A(m x n) e B(n x p),
   calcular o produto A * B.
**********************************/

#include <stdio.h>

int main() {
    int m, n, p;
    float A[100][100], B[100][100], result[100][100];

    // 1) Entrada das dimensões
    printf("Digite o número de linhas (m) de A: ");
    scanf("%d", &m);
    printf("Digite o número de colunas (n) de A / linhas de B: ");
    scanf("%d", &n);
    printf("Digite o número de colunas (p) de B: ");
    scanf("%d", &p);

    // 2) Leitura da matriz A
    printf("Digite os elementos da matriz A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%f", &A[i][j]);

    // 3) Leitura da matriz B
    printf("Digite os elementos da matriz B (%d x %d):\n", n, p);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            scanf("%f", &B[i][j]);

    // 4) Exibição da matriz A
    printf("\n==============================\n");
    printf("Matriz A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%8.2f", A[i][j]);
        }
        printf("\n");
    }

    // 5) Exibição da matriz B
    printf("\n==============================\n");
    printf("Matriz B (%d x %d):\n", n, p);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("%8.2f", B[i][j]);
        }
        printf("\n");
    }

    // 6) Inicializar resultado
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            result[i][j] = 0.0f;

    // 7) Calcular produto A * B
    for (int i = 0; i < m; i++) {
        for (int k = 0; k < p; k++) {
            for (int j = 0; j < n; j++) {
                result[i][k] += A[i][j] * B[j][k];
            }
        }
    }

    // 8) Exibir resultado
    printf("\n==============================\n");
    printf("Produto A * B (%d x %d):\n", m, p);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%8.2f", result[i][j]);
        }
        printf("\n");
    }
    printf("==============================\n");

    return 0;
}
