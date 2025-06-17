#include <stdio.h>

int main(void) {
    int N, i;
    double E = 0.0, fact = 1.0;

    printf("Digite um inteiro positivo N: ");
    scanf("%d", &N);

    // calcula 1/1! + 1/2! + ... + 1/N!
    for (i = 1; i <= N; i++) {
        fact *= i;        // fatorial cresce rápido, use double para evitar overflow precoce
        E += 1.0 / fact;
    }

    printf("Valor de E = %.6f\n", E);
    return 0;
}

