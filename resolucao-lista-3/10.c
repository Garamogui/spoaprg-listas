
// #include <ctype.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  system("clear");

  int x,y,z, operation;

  printf("Digite o valor x: ");
  scanf("%d", &x);
  printf("Digite o valor y: ");
  scanf("%d", &y);
  printf("Digite o valor z: ");
  scanf("%d", &z);

 printf("\n-----------------\n");

 printf("Escolha o tipo de Média: \n");
 printf("1. Geométrica\n");
 printf("2. Ponderada\n");
 printf("3. Harmônica\n");
 printf("4. Aritmética\n\n");
 scanf("%d", &operation);

 printf("\n-----------------\n");


 if (operation == 1) {
    printf("Média Geométrica: %.2f\n", pow(x * y * z, 1.0/3.0));
  } else if (operation == 2) {
    printf("Média Ponderada: %.2f\n", (x + y + z) / 3.0);
  } else if (operation == 3) {
    printf("Média Harmônica: %.2f\n", 3.0 / ((1.0/x) + (1.0/y) + (1.0/z)));
  } else if (operation == 4) {
    printf("Média Aritmética: %.2f\n", (x + y + z) / 3.0);
  } else {
    printf("Operação inválida\n");
 }


  return 1;
}
