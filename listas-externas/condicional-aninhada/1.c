/*
 * Faça um programa que receba dois números e mostre qual deles é o maior.
 */

#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "portuguese");
  int num1, num2;

  printf("Escolha dois números para compará-los: \n");

  scanf("%d", &num1);
  scanf("%d", &num2);

  if (num1 > num2) {
    printf("O número %d é maior que o %d.\n", num1, num2);
    return 0;
  } else if (num1 < num2) {
    printf("O número %d é maior que o %d.\n", num2, num1);
  } else{
    printf("Ambos são iguais. \n");
 }


  return 0;
}
