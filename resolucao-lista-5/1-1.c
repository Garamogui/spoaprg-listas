#include <stdio.h>

int main() {
    int arr[1000], size, i, j, temp;

    printf("Qual o tamanho da lista?: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++) {
        printf("Escolha o %dº número: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Algoritmo de ordenação por seleção
    for (i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Troca os elementos
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("A Array ordenada é: \n");
    printf("[");
    for (i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
