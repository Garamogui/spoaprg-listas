/*
 *
 * 10. Escreva uma função que receba uma matriz de inteiros de ordem m x n e
 * preencha um vetor com a soma dos elementos de cada linha. Depois, exiba o
 * vetor resultante.
 *
 */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void sum_rows(int matrix[1000][1000], int rows, int cols, int sum[]) {
  for (int i = 0; i < rows; i++) {
    sum[i] = 0; // Inicializa a soma da linha
    for (int j = 0; j < cols; j++) {
      sum[i] += matrix[i][j]; // Adiciona os elementos da linha à soma
    }
  }
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  system("clear");

  int rows, cols;
  int matrix[1000][1000];
  int sum[1000];

  printf("------- Soma das Linhas da Matriz -------\n");
  printf("Digite o número de linhas: ");
  scanf("%d", &rows);
  printf("Digite o número de colunas: ");
  scanf("%d", &cols);

  // usuário preenche a matriz
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }

  sum_rows(matrix, rows, cols, sum);

  // exibir valor
  printf("--------------------------------\n");
  printf("Soma dos elementos de cada linha:\n");
  for (int i = 0; i < rows; i++) {
    printf("Soma da linha %d: %d\n", i + 1, sum[i]);
  }

  return 0;
}
