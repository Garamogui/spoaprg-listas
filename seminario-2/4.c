#include <stdio.h>

int main(void) {
    int N;
    int i, j;
    int num = 1;    // valor crescente que representa o termo de Floyd

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);

    // Dois loops aninhados: externo para linhas, interno para colunas
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");  // nova linha ao final de cada linha do triângulo
    }

    return 0;
}
