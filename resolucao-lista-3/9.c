
// #include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  system("clear");

  float weight, height;

  printf("Digite o peso (em kg): ");
  scanf("%f", &weight);

  //  while (getchar() != '\n') ;

  printf("Digite a altura (em m): ");
  scanf("%f", &height);

  printf("Classificação: ");

  if (height < 1.20) {
    if (weight < 60) {
      printf("A\n");
    } else if (weight >= 60 && weight <= 90) {
      printf("B\n");
    } else {
      printf("C\n");
    }

  } else if (height >= 1.20 && height <= 1.70) {

    if (weight < 60) {
      printf("A\n");
    } else if (weight >= 60 && weight <= 90) {
      printf("B\n");
    } else {
      printf("C\n");
    }

    printf("Peso ideal\n");
  } else if (height > 1.70) {

    if (weight < 60) {
      printf("A\n");
    } else if (weight >= 60 && weight <= 90) {
      printf("B\n");
    } else {
      printf("C\n");
    }

  } else {
    printf("Altura inválida\n");
  }

  return 1;
}
