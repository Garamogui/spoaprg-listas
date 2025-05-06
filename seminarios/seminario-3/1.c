
/**********************************
1. Dada uma matriz real A com m
   linhas e n colunas, e um vetor real V com n elementos,
   determinar o produto de A por V.
**********************************/

#include <stdio.h>

int main() {

    int m, n;
    // Matriz A (máx. 100x100), vetor V e resultado, todos reais
    float A[100][100], V[100], result[100];

    // Leitura das dimensões da matriz
    printf("Digite o número de linhas (m) da matriz A: ");
    scanf("%d", &m);
    printf("Digite o número de colunas (n) da matriz A (deve ser igual ao tamanho do vetor V): ");
    scanf("%d", &n);

    // Leitura da matriz A
    printf("Digite os elementos da matriz A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &A[i][j]);
        }
    }

    // Exibir Matriz A
    printf("==============================\n");
    printf("Matriz A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%8.2f", A[i][j]);
        }
        printf("\n");
    }
    printf("==============================\n");

    // Leitura do vetor V
    printf("Digite os elementos do vetor V (%d elementos):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &V[i]);
    }

    // Exibir Vetor V
    printf("==============================\n");
    printf("Vetor V:\n");
    for (int i = 0; i < n; i++) {
        printf("%8.2f", V[i]);
    }
    printf("\n==============================\n");

    // Cálculo do produto A * V
    for (int i = 0; i < m; i++) {
        result[i] = 0.0f; // Inicializa o resultado
        for (int j = 0; j < n; j++) {
            result[i] += A[i][j] * V[j];
        }
    }

    // Impressão do resultado
    printf("O resultado do produto A * V é:\n");
    for (int i = 0; i < m; i++) {
        printf("%8.2f\n", result[i]);
    }

    return 0;
}
