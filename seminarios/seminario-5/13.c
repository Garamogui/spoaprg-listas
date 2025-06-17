#include <stdio.h>

void ordena(int *a, int *b) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int x, y;

    
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &x);
    
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &y);

  
    ordena(&x, &y);

    
    printf("Maior valor: %d\n", x);
    printf("Menor valor: %d\n", y);

    return 0;
}
