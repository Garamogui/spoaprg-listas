/*
Faça um programa que leia um ńumero inteiro, positivo, N, e depois imprima os primeiros números naturais e ímpares.
 */

#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int n;

  printf("Escolha um número para listar seus anteriores, ímpares.\n");
  scanf("%d", &n);

  printf("\nOs números são:\n");

  for (int i = 0; i <= n; i++) {
    if ((i % 2) == 1) {
      if (i != 1) {
        printf("; %d", i);
      } else {
        printf("%d", i);
      }
    }
  }
  printf("\n");

  return 0;
}
