#include <stdio.h>

void somarVetores(int *v1, int *v2, int *res, int tam) {
    for (int i = 0; i < tam; i++) {
        *(res + i) = *(v1 + i) + *(v2 + i);
    }
}

int main() {
    int a[10], b[10], c[10];

    printf("Este programa soma dois vetores de 10 posições.\n");
    
    printf("Digite os elementos do primeiro vetor (10 números inteiros):\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", a + i);
    }

    printf("Digite os elementos do segundo vetor (10 números inteiros):\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", b + i);
    }

    somarVetores(a, b, c, 10);

    printf("Resultado da soma dos vetores:\n");
    for (int i = 0; i < 10; i++) {
        printf("c[%d] = %d\n", i, *(c + i));
    }

    return 0;
}
