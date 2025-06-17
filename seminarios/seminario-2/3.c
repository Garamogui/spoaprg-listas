#include <stdio.h>

int main(void) {
    int n, i;
    double H = 0.0;  // soma em ponto flutuante para precisão

    printf("Digite um inteiro positivo n: ");
    scanf("%d", &n);

    // acumula termos de 1/1 até 1/n; cuidado com n grande (performance)
    for (i = 1; i <= n; i++) {
        H += 1.0 / i;
    }

    printf("Harmonico H_%d = %.6f\n", n, H);
    return 0;
}

