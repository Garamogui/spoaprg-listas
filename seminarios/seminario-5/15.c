/*15 - Crie uma função que receba dois parâmetros: um array e um valor do*/
/*mesmo tipo do array. A função deverá preencher os elementos de array com*/
/*esse valor. Não utilize índices, para artimética de ponteiros para percorrer*/
/*o array.*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void fillArray(int *array, int tamanho, int valor) {
  // Usando um ponteiro para percorrer o array
  int *pArray = array;
  for (int i = 0; i < tamanho; i++) {
    *pArray = valor; // Preenche o valor
    pArray++;        // Move o ponteiro para o próximo elemento
  }
}

int main(int argc, char *argv[]) {
  setlocale(LC_ALL, ""); // Para suporte a caracteres especiais, se necessário

  int tamanho;
  int array[100];

  printf("Digite o tamanho do array: ");
  scanf("%d", &tamanho);

  if (tamanho > 100) {
    printf("O tamanho máximo permitido é 100.\n");
    return EXIT_FAILURE;
  }

  int valor;
  printf("Digite o valor para preencher o array: ");
  scanf("%d", &valor);

  fillArray(array, tamanho, valor); // Chama a função para preencher o array

  // Exibe o array preenchido
  printf("Array preenchido: ");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return EXIT_SUCCESS;
}
