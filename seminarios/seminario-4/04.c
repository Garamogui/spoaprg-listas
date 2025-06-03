/*
 *
 * 4. Escreva uma função recusriva que calcule a base^{expoente} (inteiros positivos).
 *
 */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int exponent(int a, int b);

int main() {
  setlocale(LC_ALL, "Portuguese");
  system("clear");

  int a, b;

  printf(" ------- Expoentes -------\n");
  printf("Escolha a base: ");
  scanf("%d", &a);
  printf("Escolha o expoente: ");
  scanf("%d", &b);

  printf(" --------------------------------\n");
  printf("%d elevado a %d é: %d\n", a, b, exponent(a, b));

}

int exponent(int a, int b){
 if (b == 0) {
  return 1;
 }

 return a * exponent(a, b - 1);
}
