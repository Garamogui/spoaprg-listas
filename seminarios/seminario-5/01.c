#include <stdio.h>

void trocar(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    int *px, *py;

    px = &x;
    py = &y;

    printf("Digite o valor de x: ");
    scanf("%d", px);

    printf("Digite o valor de y: ");
    scanf("%d", py);

    printf("\nANTES DA TROCA:\n");
    printf("x = %d, y = %d\n", *px, *py);
    printf("Endereço de x: %p\n", px);
    printf("Endereço de y: %p\n", py);

    trocar(px, py);

    printf("\nDEPOIS DA TROCA:\n");
    printf("x = %d, y = %d\n", *px, *py);
    printf("Endereço de x: %p\n", px);
    printf("Endereço de y: %p\n", py);

    return 0;
}
