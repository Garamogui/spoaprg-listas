/*
 *
 * 9. Escreva uma função que conte quantos dígitos pares há em um vetor de números inteiros positivos.
 *
 */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // Define um tamanho máximo para o vetor

int countEvenDigits(int vec[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        int number = vec[i];

        // Conta os dígitos pares de cada número
        while (number > 0) {
            int digit = number % 10; // Obtém o último dígito
            if (digit % 2 == 0) {
                count++; // Incrementa o contador se o dígito for par
            }
            number /= 10; // Remove o último dígito
        }
    }
    return count; // Retorna o total de dígitos pares
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("clear");

    int size;
    int vec[MAX_SIZE]; // Declara um vetor de tamanho fixo

    printf("------- Contagem de Dígitos Pares -------\n");
    printf("Digite o tamanho do vetor (máximo %d): ", MAX_SIZE);
    scanf("%d", &size);

    // Preenche o vetor com os elementos fornecidos pelo usuário
    for (int i = 0; i < size; i++) {
        printf("Digite o elemento %d (número inteiro positivo): ", i + 1);
        scanf("%d", &vec[i]);
    }

    // Chama a função para contar os dígitos pares
    int evenCount = countEvenDigits(vec, size);

    // Exibe o resultado
    printf("--------------------------------\n");
    printf("Total de dígitos pares: %d\n", evenCount);

    return 0;
}
