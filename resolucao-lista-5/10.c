/*
 * Escrver um programa que leia os elementos de uma matriz inteira (4x4) e
 * impria os elementos da diagnoal principal.
 * */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

  setlocale(LC_ALL, "Portuguese");
  system("clear");

  int matrix[4][4];

  printf("Insira os elementos da matriz 4x4:\n");
  printf("\n---------------------------------\n");

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("Insira o elementos [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("\n---------------------------------\n");

  printf("A matriz é: \n");

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (j != 3) {
        printf("%d, ", matrix[i][j]);
      } else {
        printf("%d\n", matrix[i][j]);
      }
    }
  }

  printf("A diagonal principal é: ");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (j == i) {
        printf("%d, \n", matrix[j][j]);
      }
    }
  }
}
