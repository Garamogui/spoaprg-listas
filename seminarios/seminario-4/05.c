/*
 *
 * 5. Crie uma função que receba um número inteiro e retorne 1 se ele for um
 * palíndromo e 0 caso contrário.
 *
 */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int is_palindrome(int num);

int main() {
  setlocale(LC_ALL, "Portuguese");
  system("clear");

  int num;

  printf("------- Verificação de Palíndromo -------\n");
  printf("Escolha o número: ");
  scanf("%d", &num);

  printf("-----------------------------------------\n");

  if (is_palindrome(num)) {
    printf("O número %d é um palíndromo.\n", num);
  } else {
    printf("O número %d não é um palíndromo.\n", num);
  }

  return 0;
}

int is_palindrome(int num) {
  int original = num;
  int reversed = 0;

  num = (num < 0) ? -num : num;

  // Inverte o número
  while (num > 0) {
    reversed = reversed * 10 + (num % 10);
    num /= 10;
  }

  // Compara o número original com o reverso
  return (original == reversed) ? 1 : 0;
}
