/**********************************
4. Dada uma matriz quadrada A(nxn), verificar se A é um quadrado mágico.
**********************************/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    int A[100][100];
    
    // 1) Leitura da dimensão
    printf("Digite a ordem n da matriz quadrada A (n <= 100): ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("Valor de n inválido.\n");
        return 1;
    }

    // 2) Leitura da matriz A
    printf("Digite os elementos da matriz A (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // 3) Exibição da matriz A
    printf("\n==============================\n");
    printf("Matriz A (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%6d", A[i][j]);
        }
        printf("\n");
    }
    printf("==============================\n");

    // 4) Cálculo da soma de referência (primeira linha)
    int soma_ref = 0;
    for (int j = 0; j < n; j++) {
        soma_ref += A[0][j];
    }

    bool magico = true;

    // 5) Verifica cada linha
    for (int i = 1; i < n && magico; i++) {
        int soma_linha = 0;
        for (int j = 0; j < n; j++) {
            soma_linha += A[i][j];
        }
        if (soma_linha != soma_ref) {
            magico = false;
        }
    }

    // 6) Verifica cada coluna
    for (int j = 0; j < n && magico; j++) {
        int soma_col = 0;
        for (int i = 0; i < n; i++) {
            soma_col += A[i][j];
        }
        if (soma_col != soma_ref) {
            magico = false;
        }
    }

    // 7) Verifica diagonal principal
    int soma_diag1 = 0;
    for (int i = 0; i < n; i++) {
        soma_diag1 += A[i][i];
    }
    if (soma_diag1 != soma_ref) {
        magico = false;
    }

    // 8) Verifica diagonal secundária
    int soma_diag2 = 0;
    for (int i = 0; i < n; i++) {
        soma_diag2 += A[i][n - 1 - i];
    }
    if (soma_diag2 != soma_ref) {
        magico = false;
    }

    // 9) Resultado
    if (magico) {
        printf("A matriz é um quadrado mágico! Soma = %d\n", soma_ref);
    } else {
        printf("A matriz não é um quadrado mágico.\n");
    }

    return 0;
}
