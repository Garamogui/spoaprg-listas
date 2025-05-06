/**********************************
10.  Receba dois vetores ordenados e gere um tereiceiro vetor ordenado, que contenha os elementos dos dois vetores.
**********************************/

#include <stdio.h>

int main() {
    int vec1[100], vec2[100], result[200]; // Vetores de entrada e o vetor resultante
    int n1, n2, i1 = 0, i2 = 0, i = 0;

    // Leitura dos vetores
    printf("Digite o número de elementos do primeiro vetor: ");
    scanf("%d", &n1);
    printf("Digite os elementos do primeiro vetor ordenados:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &vec1[i]);
    }

    printf("Digite o número de elementos do segundo vetor: ");
    scanf("%d", &n2);
    printf("Digite os elementos do segundo vetor ordenados:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &vec2[i]);
    }

    // Mesclar os dois vetores ordenados
    while (i1 < n1 && i2 < n2) {
        if (vec1[i1] < vec2[i2]) {
            result[i] = vec1[i1];
            i1++;
        } else {
            result[i] = vec2[i2];
            i2++;
        }
        i++;
    }

    // Caso o primeiro vetor tenha elementos restantes
    while (i1 < n1) {
        result[i] = vec1[i1];
        i1++;
        i++;
    }

    // Caso o segundo vetor tenha elementos restantes
    while (i2 < n2) {
        result[i] = vec2[i2];
        i2++;
        i++;
    }

    // Exibição do vetor resultante
    printf("Vetor resultante ordenado: ");
    for (int i = 0; i < (n1 + n2); i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
