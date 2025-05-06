/**********************************
6.  Dada ua matriz onde cada linha e coluna são ordenadas, implemente um algoritmo eficiente para buscar um número.
**********************************/

#include <stdio.h>

int main() {
    int m, n;
    int M[100][100];
    int alvo;
    int encontrado = 0;

    // Leitura das dimensões
    printf("Digite o número de linhas (m): ");
    scanf("%d", &m);
    printf("Digite o número de colunas (n): ");
    scanf("%d", &n);

    // Leitura da matriz
    printf("Digite os elementos da matriz ordenada (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &M[i][j]);

    // Exibição da matriz
    printf("\nMatriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%5d", M[i][j]);
        printf("\n");
    }

    // Leitura do número a buscar
    printf("\nDigite o número a buscar: ");
    scanf("%d", &alvo);
 

    // começa no canto superior direito
    int i = 0, j = n - 1;  
    while (i < m && j >= 0) {
        if (M[i][j] == alvo) {
            encontrado = 1;
            printf("Número %d encontrado na posição (%d, %d).\n", alvo, i, j);
            break;
        } else if (M[i][j] > alvo) {
            j--;  // move para a esquerda
        } else {
            i++;  // move para baixo
        }
    }

    if (!encontrado)
        printf("Número %d não encontrado na matriz.\n", alvo);

    return 0;
}
