QUESTÃO 10 – Preencher vetor com valor via ponteiro

#include <stdio.h>

void preencher(int *vetor, int valor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        *(vetor + i) = valor;
    }
}

int main() {
    int v[5], valor;
    int *pv = v;

    printf("Digite um valor para preencher o vetor: ");
    scanf("%d", &valor);

    preencher(pv, valor, 5);

    printf("Vetor preenchido:\n");
    for (int i = 0; i < 5; i++) {
        printf("v[%d] = %d\n", i, *(pv + i));
    }

    return 0;
}