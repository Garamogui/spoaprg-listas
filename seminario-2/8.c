#include <stdio.h>

int main(void) {
    int n, i, val, max, count = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    // inicializa max apenas na primeira leitura
    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        if (i == 0 || val > max) {
            max = val;
            count = 1;
        } else if (val == max) {
            count++;
        }
    }

    printf("Maior valor = %d, lido %d vezes\n", max, count);
    return 0;
}
