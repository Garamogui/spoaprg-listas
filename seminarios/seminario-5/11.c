QUESTÃO 11 – Imprimir vetor com ponteiros

#include <stdio.h>

void imprimir(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: %d\n", i, *(vetor + i));
    }
}

int main() {
    int v[5];
    int *pv = v;

    printf("Digite 5 valores para o vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", pv + i);
    }

    imprimir(pv, 5);

    return 0;
}