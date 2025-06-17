/*
 * Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.
 */

#include <locale.h>
#include <math.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "portuguese");
  float num1, sqrtnum;

  printf("Forneça um número: ");
  scanf("%f", &num1);

 if (num1 < 0) {
  printf("Número inválido");
 } else {
  sqrtnum = sqrt(num1);
  printf("√%f ≅ %.4f ", num1, sqrtnum);
 }

  return 0;
}
