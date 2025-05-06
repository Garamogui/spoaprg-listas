/**********************************
11.  Dados dois vetores A e B de 5 elementos, gere um vetor C intercalando os elementos de A e B.
**********************************/

#include <stdio.h>

int main() {
    int A[5], B[5], C[10];

    // Leitura dos vetores A e B
    printf("Digite os elementos do vetor A (5 elementos):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os elementos do vetor B (5 elementos):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
    }

    // Intercalando os elementos de A e B em C
    int k = 0;
    for (int i = 0; i < 5; i++) {
        C[k++] = A[i];  // Adiciona A[i] em C
        C[k++] = B[i];  // Adiciona B[i] em C
    }

    // Exibição do vetor C
    printf("Vetor C intercalado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
