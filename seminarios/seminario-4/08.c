/*
 *
 * 8. Escreva uma função receba um vetor de inteiros e diga se ele está em ordem crescente.
 *
 */



#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int is_sorted(int vec[], int size) {
    for (int i = 1; i < size; i++) {
        if (vec[i] < vec[i - 1]) {
            return 0; // Retorna 0 se o vetor não estiver em ordem crescente
        }
    }
    return 1; // Retorna 1 se o vetor estiver em ordem crescente
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("clear");

    int size;
    int vec[10000]; 

    printf("------- Verificação de Ordem Crescente -------\n");
    printf("Escolha o tamanho do vetor: ");
    scanf("%d", &size);


    for (int i = 0; i < size; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vec[i]); 
    }

    printf("--------------------------------\n");
    if (is_sorted(vec, size)) {
        printf("O vetor está em ordem crescente.\n");
    } else {
        printf("O vetor não está em ordem crescente.\n");
    }

    return 0;
}

