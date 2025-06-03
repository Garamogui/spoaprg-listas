/*
*
* 2. Crie uma função recursiva que calcule o MDC entre dois números inteiros positivos.
*
*/


#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

int mdc(int a, int b);

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("clear");

    int a, b;

    printf(" ------- Cálculo do MDC -------\n");
    printf("Digite o 1º número: ");
    scanf("%d", &a);
    printf("Digite o 2º número: ");
    scanf("%d", &b);

    if (a > 0 && b > 0) {
        printf("O MDC entre %d e %d é: %d\n", a, b, mdc(a, b));
    } else {
        printf("Por favor, insira números inteiros positivos.\n");
    }

    return 0;
}

int mdc(int a, int b) {
    if (b == 0) {
        return a; // Caso base
    }
    return mdc(b, a % b); // Chamada recursiva correta
}
