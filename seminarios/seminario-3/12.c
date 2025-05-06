/**********************************
12. Verifique se uma matriz 9x9 representa uma solução válida de Sudoku (sem repetições em linhas, colunas e blocos 3x3)
**********************************/

#include <stdio.h>

int main() {
    int M[9][9];
    int i, j, r, c;
    int valido = 1;

    // 1) Leitura da matriz 9x9
    printf("Digite os elementos da solução de Sudoku (9x9), linha por linha:\n");
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    // 2) Verifica linhas
    for (i = 0; i < 9 && valido; i++) {
        int seen[10] = {0};
        for (j = 0; j < 9; j++) {
            int v = M[i][j];
            if (v < 1 || v > 9 || seen[v]) {
                valido = 0;
                break;
            }
            seen[v] = 1;
        }
    }

    // 3) Verifica colunas
    for (j = 0; j < 9 && valido; j++) {
        int seen[10] = {0};
        for (i = 0; i < 9; i++) {
            int v = M[i][j];
            if (v < 1 || v > 9 || seen[v]) {
                valido = 0;
                break;
            }
            seen[v] = 1;
        }
    }

    // 4) Verifica blocos 3x3
    for (r = 0; r < 9 && valido; r += 3) {
        for (c = 0; c < 9 && valido; c += 3) {
            int seen[10] = {0};
            // bloco com canto superior-esquerdo em (r,c)
            for (i = r; i < r + 3; i++) {
                for (j = c; j < c + 3; j++) {
                    int v = M[i][j];
                    if (v < 1 || v > 9 || seen[v]) {
                        valido = 0;
                        break;
                    }
                    seen[v] = 1;
                }
                if (!valido) break;
            }
        }
    }

    // 5) Resultado
    if (valido)
        printf("É uma solução válida de Sudoku.\n");
    else
        printf("Não é uma solução válida de Sudoku.\n");

    return 0;
}
