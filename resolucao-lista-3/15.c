/*
 *  Faça um programa que leia os coeficientes de uma euqação do segundo grau. Em
 * seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes
 * são calculadas como x = (-b ± (√(b²-4ac)))/2a
 *
 * Se  Δ = 0, existe uma raiz real. Imprima a raiz e a mensagem "Raíz única".
 * Se  Δ > 0, existem duas raízes. Imprima as raízes.
 */

#include <locale.h>
#include <math.h>
#include <stdio.h>

int main() {

  setlocale(LC_ALL, "Portuguese");
  float a, b, c, x1, x2, delta;

  // presentation and data collection
  printf("Descubra as raízes da equação do segundo grau. \n");
  printf("Insira o \"a\": ");
  scanf("%f", &a);
  printf("Insira o \"b\": ");
  scanf("%f", &b);
  printf("Insira o \"c\": ");
  scanf("%f", &c);

  // processing
  delta = (pow(b, 2)) - 4 * a * c;

  // compare Δ to 0

  if (delta < 0) {
    printf("Não existem raízes reais.\n");
  } else if (delta > 0) {
     x1 = (-b + sqrt(delta)) / (2 * a);
     x2 = (-b - sqrt(delta)) / (2 * a);
     printf("As raízes são %f e %f", x1, x2);

  } else {
     x1 = -b / (2 * a);
     printf("A raíz é %f", x1);
  }

  return 0;
}
