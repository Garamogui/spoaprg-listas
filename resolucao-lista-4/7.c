/*

Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiors que 0.


*/

#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int n;

  printf("\nOs números são:\n");

  n = 1;
  for (int i = 1; i <= 5; i++) {
  printf("%d ", i * 3);
  }
  printf("\n");

  return 0;
}
