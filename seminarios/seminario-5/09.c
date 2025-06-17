/*9. Escreva uma função que retorna o maior valor de um array de tamanho N.
 * Escreva um programa que leia N valores inteiros, imprima o array com k
 * elementos por linha, e o maior elemento. O valor de k também deve ser
 * fornecido pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

void print_k_by_line(int* array, int n, int k) {
  printf("array: %p\n", array);

  int i;
  for (i = 0; i < n; i++) {
    printf("%d ", *(array + i));
    if ((i + 1) % k == 0) {
      printf("\n");
    }
  }
  if (n % k != 0) {
    printf("\n");
  }
}

int find_max(int *array, int n) {
  int max = *array; // Assume que o primeiro elemento é o maior
  int i = 1;
  for (i = 1; i < n; i++) {
    if (*(array + i) > max) { // Acesso usando aritmética de ponteiros
      max = *(array + i);
    }
  }
  return max;
}

int main() {

  system("clear");

  int n, k, array[100];

  printf("Digite o tamanho do array (N): ");
  scanf("%d", &n);
  if (n < 1 || n > 100) {
    printf("Tamanho inválido. Deve estar entre 1 e 100.\n");
    return 1;
  }
  printf("Digite o valor de k (número de elementos por linha): ");
  scanf("%d", &k);
  if (k <= 0 || k > n) {
    printf("Valor de k inválido. Deve ser maior que 0 e menor ou igual a N "
           "(%d).\n",
           n);
    return 1;
  }

  printf("Digite os %d elementos do array:\n", n);
  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", (array + i)); // Acesso usando aritmética de ponteiros
  }

  printf("Array com %d elementos por linha:\n", k);
  print_k_by_line(array, n, k);

  int max_value = find_max(array, n);
  printf("O maior elemento do array é: %d\n", max_value);

  return 0;
}
