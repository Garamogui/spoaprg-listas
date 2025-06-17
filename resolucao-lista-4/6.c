/*
 * Elabore um programa que imprima os múltiplos de 5, no intervalo de 1 até 500. 
 */

#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int n;

  printf("\nOs números são:\n");

  for (int i = 0; i <= 500; i+=5) {
  if (i == 0) {
   printf("1, ");
  } else {
   if (i == 500) {
    printf("%d\n", i);
   } else {

    printf("%d, ", i);
   }
   
  }

  }

  printf("\n");

  return 0;
}
