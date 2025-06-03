/*
*
* 1. Escreva uma função que receba um número inteiro e retorne 1 se ele for um
* número perfeito (a soma de seus divisores próprios é igual ao próprio número)
* ou 0 caso contrário.
*
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int is_perfect(int n);

// Função Principal
int main() {
  setlocale(LC_ALL, "Portuguese");
  system("clear");

  // variáveis
  int n;

  printf("Insira um número para verificar se é perfeito: ");
  scanf("%d", &n);

  is_perfect(n) ?
  printf("O número %d é perfeito.\n", n) :
  printf("O número %d não é perfeito.\n", n);

  return 0;
}

// Função para verificar se um número é perfeito
int is_perfect(int n) {
  int sum = 0;

  printf("Divisores: ");
  for (int i = 1; i < n; i++) {
     if (n % i == 0) {
         sum += i;
         printf("%d ", i); 
     }
  }
  printf("\n"); // Para uma nova linha após a lista de divisores

  return (sum == n) ? 1 : 0;
}
