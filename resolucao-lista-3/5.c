#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  setlocale(LC_ALL, "Portuguese");
  system("clear");

  float num;

  printf("Digite um número: ");
  scanf("%f", &num);

  if (num > 0) {
  printf("Quadrado: %.2f\nRaíz: %.2f\n", num * num, sqrt(num));
    num = pow(num, 2);

 } else {
  printf("Número negativo, tente um número positivo.\n");
 }

}
