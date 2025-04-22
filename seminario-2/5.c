#include <stdio.h>

int main(void) {
    int n, i, count = 0;

    printf("Digite um inteiro maior que 1: ");
    scanf("%d", &n);

    // conta quantos divisores n possui
    for (i = 1; i <= n; i++) {
        if (n % i == 0) count++;
    }

    // um número primo tem exatamente 2 divisores: 1 e ele mesmo
    if (count == 2)
        printf("%d e primo.\n", n);
    else
        printf("%d nao e primo.\n", n);

    return 0;
}

