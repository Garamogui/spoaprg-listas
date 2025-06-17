QUESTÃO 12 – Dobro, triplo e quádruplo usando ponteiros

#include <stdio.h>

int main() {
    int a;
    int *b;
    int **c;
    int ***d;

    printf("Digite um valor inteiro: ");
    scanf("%d", &a);

    b = &a;
    c = &b;
    d = &c;

    printf("Dobro: %d\n", 2 * (**c));
    printf("Triplo: %d\n", 3 * (**c));
    printf("Quádruplo: %d\n", 4 * (***d));

    return 0;
}