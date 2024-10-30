/*
 *
 * Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
 * possui uma taxa diferente de imposto sobre o produto. Faça um programa em que
 * o usuário entre com o valor e o estado de destino do produto e o programa
 * retorne o preço final do produto acrescido de imposto do estado em que ele
 * será vendido. Se o estado digitado não for válido, mostrará uma mensagem de
 * erro.
 *
 * MG: 7%
 * SP: 12%
 * RJ: 15%
 * MS: 8%
 */

#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

int main() {

  setlocale(LC_ALL, "pt_BR.UTF-8");

  // variables
  float price;
  char destination[3];

  // get data
  printf("Para descobrir a taxa, digite o valor do produto: ");
  scanf("%f", &price);
  printf("\nDigite a sigla do estado de destino (MG, SP, etc): ");
  scanf("%s", destination);

  // operations

  for (int i = 0; destination[i] != '\0'; i++) {
    destination[i] = toupper(destination[i]);
  };

 // compare the cases
 // the `strcmp` function is there to correctly check if the value of the string `destination` correponds to the one we are looking for. Since strings in C are arrays of chars, structures like `if` or `switch` can't compare them directly.
  if (strcmp(destination, "MG") == 0) {
    price *= 1.07;
    printf("O Preço com impostos é %.2f\n\n ", price);
  } else if (strcmp(destination, "SP") == 0) {
    price *= 1.12;
    printf("O Preço com impostos é %.2f\n\n ", price);
  } else if (strcmp(destination, "RJ") == 0) {
    price *= 1.15;
    printf("O Preço com impostos é %.2f\n\n ", price);
  } else if (strcmp(destination, "MS") == 0) {
    price *= 1.08;
    printf("O Preço com impostos é %.2f\n\n ", price);
  } else {
    printf("Estado inválido. \n");
  }

  return 0;
}
