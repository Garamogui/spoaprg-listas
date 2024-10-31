
/*
 * Faça um programa para verificar se determinado número inteiro lido é
 * divisível por 3 ou 5, mas não simultâneamente pelos dois.
 */

#include <stdio.h>
#include <locale.h>

int main() {
 setlocale(LC_ALL, "Portuguese");

  int num;

  printf("Insira o número para testá-lo: ");
  scanf("%d", &num);

 if (num % 3 == 0  && num % 5 == 0) {
  printf("Divisível por 3 e 5.\n");
 } else if (num % 3 == 0) {
  printf("Divisível por 3.\n");
 } else if (num % 5 == 0) {
  printf("Divisível por 5.\n");
 } else {
  printf("Não é divisível por 3 ou 5.\n");
 }

  return 0;
}
