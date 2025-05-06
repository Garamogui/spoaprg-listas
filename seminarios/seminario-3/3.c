/**********************************
3. Dada uma matriz real A(m x n) verficar se existem elementos repetidos em
**********************************/

#include <stdio.h>

int main() {
  int m, n;
  float A[100][100];
  int repetido = 0;

  // 1) Leitura das dimensões
  printf("Digite o número de linhas (m) da matriz A: ");
  scanf("%d", &m);
  printf("Digite o número de colunas (n) da matriz A: ");
  scanf("%d", &n);

  // 2) Leitura da matriz A
  printf("Digite os elementos da matriz A (%d x %d):\n", m, n);
  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
      scanf("%f", &A[i][j]);

  for (int i1 = 0; i1 < m && !repetido; i1++) {
    for (int j1 = 0; j1 < n && !repetido; j1++) {
      for (int i2 = 0; i2 < m && !repetido; i2++) {
        for (int j2 = 0; j2 < n; j2++) {
          if (i1 == i2 && j1 == j2)
            continue; // ignora a mesma posição

          if (A[i1][j1] == A[i2][j2]) {
            repetido = 1;
            break; // sai do loop mais interno
          }
        }
      }
    }
  }

  // 4) Impressão da matriz A
  printf("\n==============================\n");
  printf("Matriz A:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%8.2f", A[i][j]);
    }
    printf("\n");
  }
  printf("==============================\n");

  // 5) Resultado
  if (repetido)
    printf("Existem elementos repetidos na matriz A.\n");
  else
    printf("Todos os elementos da matriz A são distintos.\n");

  return 0;
}
