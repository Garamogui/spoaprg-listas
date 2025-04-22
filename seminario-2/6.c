#include <stdio.h>

int main(void) {
    int i, denom;
    double S = 0.0;

    // para i ímpares de 1 a 99, denom corresponde ao termo da série
    for (i = 1, denom = 1; i <= 99; i += 2, denom++) {
        S += (double)i / denom;
    }

    printf("Valor de S = %.6f\n", S);
    return 0;
}
