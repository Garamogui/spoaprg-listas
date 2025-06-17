// Exercício 10 - Somar dois vetores de 10 posições

#include <stdio.h>

void somarVetores(int *v1, int *v2, int *res, int tam) {
    for (int i = 0; i < tam; i++) {
        *(res + i) = *(v1 + i) + *(v2 + i);
    }
}

int main() {
    int a[10], b[10], c[10];

    for (int i = 0; i < 10; i++) scanf("%d", a + i);
    for (int i = 0; i < 10; i++) scanf("%d", b + i);

    somarVetores(a, b, c, 10);

    for (int i = 0; i < 10; i++) {
        printf("c[%d] = %d\n", i, *(c + i));
    }

    return 0;
}