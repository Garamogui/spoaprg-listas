#include <stdio.h>

int main(void) {
    int i;
    // começamos em 101 (primeiro ímpar >100) e passo de 2 em 2 para otimizar
    for (i = 101; i <= 299; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}
