/*
 *
 * 12. Escreva uma função que receba um vetor de inteiros e seu tamannho, e remova os elementos duplicados, mantendo apenas a primeira ocorrência de cada número. A função deve preencher um segundo vetor com os elementos únicos e retornar a nova quantidade de elementos.
 *
 */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // Define um tamanho máximo para o vetor

int remove_duplicates(int vec[], int size, int unique[]) {
    int unique_count = 0; // Contador para elementos únicos

    for (int i = 0; i < size; i++) {
        int is_duplicate = 0; // Flag para verificar duplicatas

        // Verifica se o elemento já está no vetor de únicos
        for (int j = 0; j < unique_count; j++) {
            if (vec[i] == unique[j]) {
                is_duplicate = 1; // Marca como duplicado
                break;
            }
        }

        // Se não for duplicado, adiciona ao vetor de únicos
        if (!is_duplicate) {
            unique[unique_count] = vec[i];
            unique_count++; // Incrementa o contador de únicos
        }
    }

    return unique_count; // Retorna a nova quantidade de elementos únicos
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("clear");

    int size;
    int vec[MAX_SIZE]; // Declara um vetor de tamanho fixo
    int unique[MAX_SIZE]; // Vetor para armazenar elementos únicos

    printf("------- Remoção de Duplicatas -------\n");
    printf("Digite o tamanho do vetor (máximo %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size > MAX_SIZE) {
        printf("Tamanho excede o máximo permitido.\n");
        return 1; // Encerra o programa se o tamanho for maior que o permitido
    }

    // Preenche o vetor com os elementos fornecidos pelo usuário
    for (int i = 0; i < size; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vec[i]);
    }

    // Chama a função para remover duplicatas
    int unique_count = remove_duplicates(vec, size, unique);

    // Exibe o vetor resultante
    printf("--------------------------------\n");
    printf("Elementos únicos:\n");
    for (int i = 0; i < unique_count; i++) {
        printf("%d ", unique[i]);
    }
    printf("\nQuantidade de elementos únicos: %d\n", unique_count);

    return 0;
}
