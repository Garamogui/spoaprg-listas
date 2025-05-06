/**********************************
8.  Rotacione um veotr de n elementos à direita (ou à esquerda) por uma quantidade K, informada pelo usuário.
**********************************/

#include <stdio.h>

int main() {
    int v[100], temp[100];
    int n, k, sentido;

    // 1) Leitura do vetor
    printf("Digite o número de elementos do vetor: ");
    scanf("%d", &n);

    printf("Digite os %d elementos:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    // 2) Leitura de K e do sentido
    printf("Digite a quantidade de rotações (K): ");
    scanf("%d", &k);
    k = k % n;

    printf("Digite o sentido (0 = esquerda, 1 = direita): ");
    scanf("%d", &sentido);

    // 3) Rotacionar com vetor auxiliar
    for (int i = 0; i < n; i++) {
        if (sentido == 0) { // esquerda
            temp[i] = v[(i + k) % n];
        } else { // direita
            temp[i] = v[(i - k + n) % n];
        }
    }

    // 4) Copiar resultado de volta
    for (int i = 0; i < n; i++) {
        v[i] = temp[i];
    }

    // 5) Exibir vetor rotacionado
    printf("Vetor rotacionado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
