
/**********************************
5.  Leia uma matriz quadrada n x n e verifique se ela é simétrica (M[i][j] == M[j][i]).
**********************************/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    
    // 1) Leitura da dimensão
    printf("Digite a ordem n da matriz quadrada (n <= 100): ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("Valor de n inválido.\n");
        return 1;
    }

    int M[100][100];
    bool simetrica = true;

    // 2) Leitura da matriz
    printf("Digite os elementos da matriz (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    // 3) Exibição da matriz
    printf("\n==============================\n");
    printf("Matriz (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%6d", M[i][j]);
        }
        printf("\n");
    }
    printf("==============================\n");

    // 4) Verificação de simetria
    for (int i = 0; i < n && simetrica; i++) {
        for (int j = i + 1; j < n; j++) {
            if (M[i][j] != M[j][i]) {
                simetrica = false;
                break;
            }
        }
    }

    // 5) Resultado
    if (simetrica)
        printf("A matriz é simétrica.\n");
    else
        printf("A matriz não é simétrica.\n");

    return 0;
}
