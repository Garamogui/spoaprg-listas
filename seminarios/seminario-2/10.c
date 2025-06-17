#include <stdio.h>

int main(void) {
    int M, i, count = 0;
    long fact = 1;
    long sum = 0;

    printf("Digite um inteiro positivo M: ");
    scanf("%d", &M);

    // caso par: conta divisores
    if (M % 2 == 0) {
        for (i = 1; i <= M; i++) {
            if (M % i == 0) count++;
        }
        printf("Numero par, divisores = %d\n", count);
    } else if (M < 10) {
        // ímpar e < 10: calcula fatorial
        for (i = 1; i <= M; i++) fact *= i;
        printf("Fatorial de %d = %ld\n", M, fact);
    } else {
        // ímpar >= 10: soma de 1 até M
        for (i = 1; i <= M; i++) sum += i;
        printf("Soma de 1 ate %d = %ld\n", M, sum);
    }

    return 0;
}
