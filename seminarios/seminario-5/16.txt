/*Crie uma função para somar dois arrays. Esta função deve receber dois arrays e
 * retornar a soma em um terceiro arrray. Caso o tamanho do primeiro e segundo
 * array sejam diferentes, então a função deve retornar `0`. Caso a função seja
 * concluída com sucesso, deve retornar o valor 1.*/

#include <stdio.h>
#include <stdlib.h>

int sumArrays(int* array1, int* array2, int* result, int size) {

  int i;

  // Soma o tamanho dos arrays em `result`
  for (i = 0; i < size; i++) {
    *(result + i) = *(array1 + i) + *(array2 + i);
  }

  return 1; 
}

int main(int argc, char *argv[]) {


  system("clear");

  int array1[100], array2[100], result[100];
  int size1, size2;

  printf("Digite o tamanho do primeiro array: ");
  scanf("%d", &size1);
  printf("Digite o tamanho do segundo array: ");
  scanf("%d", &size2);

  // Verificar se os tamanhos são iguais.
  if (size1 != size2) {
    printf("Resultado: 0\n");
    printf("Os tamanhos dos arrays devem ser iguais.\n");
    return 0;
  } else if (size1 > 100 || size2 > 100) {
    printf("Resultado: 0\n");
    printf("O tamanho máximo permitido é 100.\n");
    return 0;
  } else if (size1 <= 0 || size2 <= 0) {
    printf("Resultado: 0\n");
    printf("O tamanho dos arrays deve ser maior que zero.\n");
    return 0;
  }

  // ------- Preencher os arrays. -------
  printf("Digite os elementos do primeiro array:\n");
  for (int i = 0; i < size1; i++) {
    scanf("%d", &array1[i]);
  }

  printf("Digite os elementos do segundo array:\n");
  for (int i = 0; i < size2; i++) {
    scanf("%d", &array2[i]);
  }
  // ------- Preencher os arrays. -------

  // Somar os arrays:
  sumArrays(array1, array2, result, size1);


  // Exibir o resultado
  printf("Resultado da soma dos arrays:\n");
  for (int i = 0; i < size1; i++) {
    printf("%d ", result[i]);
  }

}
