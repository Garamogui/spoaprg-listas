#include <stdio.h>

int main(void) {
    int k, i;
    long a = 0, b = 1, next;  // 'a' mantém F_(i-1), 'b' mantém F_i

    printf("Digite um inteiro nao-negativo k: ");  // k pode ser 0
    scanf("%d", &k);

    // Para k >= 0, este loop avança corretamente F_k em 'a'
    for (i = 0; i < k; i++) {
        next = a + b;  // soma dos dois termos anteriores
        a = b;
        b = next;
    }

    printf("Fibonacci(%d) = %ld\n", k, a);  // imprime F_k
    return 0;
}

