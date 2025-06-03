/*
 *
 * 3. Escreva uma função que receba um número inteiro e retorne a soma de seus
 * dígitos.
 *
 */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int sum_digits(int a);

int main() {
  setlocale(LC_ALL, "Portuguese");
  system("clear");

  int a;

  printf(" ------- Soma dos Dígitos -------\n");
  printf("Escolha o número: ");
  scanf("%d", &a);

  printf(" --------------------------------\n");
  printf("A soma dos dígitos é: %d\n", sum_digits(a));

}

int sum_digits(int a) {
  int sum = 0, temp, n;

  a = (a < 0) ? -a : a;

  while (a > 0) {
    sum += a % 10;
    a /= 10;
  }

 return sum;
}
