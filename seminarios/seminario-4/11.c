/*
 *
 * 11. Crie uma função que verifique se uma matriz quadrade de ordem n é uma matriz identidade. A função deve retornar 1 se for, e 0 caso contrário.
 *
 */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // Define um tamanho máximo para a matriz

int is_identity_matrix(int matrix[MAX_SIZE][MAX_SIZE], int n);

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("clear");

    int n;
    int matrix[MAX_SIZE][MAX_SIZE];

    printf("------- Verificação de Matriz Identidade -------\n");
    printf("Digite a ordem da matriz (máximo %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n > MAX_SIZE) {
        printf("Ordem excede o máximo permitido.\n");
        return 1; // Encerra o programa se a ordem for maior que o permitido
    }

    // Preenche a matriz com os elementos fornecidos pelo usuário
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Chama a função para verificar se a matriz é identidade
    if (is_identity_matrix(matrix, n)) {
        printf("A matriz é uma matriz identidade.\n");
    } else {
        printf("A matriz não é uma matriz identidade.\n");
    }

    return 0;
}

int is_identity_matrix(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                if (matrix[i][j] != 1) {
                    return 0; // Retorna 0 se não for 1 na diagonal
                }
            } else {
                if (matrix[i][j] != 0) {
                    return 0; // Retorna 0 se não for 0 fora da diagonal
                }
            }
        }
    }
    return 1; // Retorna 1 se for uma matriz identidade
}
