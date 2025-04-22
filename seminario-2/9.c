#include <stdio.h>

int main(void) {
    int n, a1, r, i;
    int sum = 0;

    printf("Digite n, a1 e r: ");
    scanf("%d %d %d", &n, &a1, &r);

    // imprime cada termo e acumula na soma
    for (i = 0; i < n; i++) {
        int term = a1 + i * r;  
        printf("%d ", term);
        sum += term;
    }

    printf("\nSoma = %d\n", sum);
    return 0;
}
