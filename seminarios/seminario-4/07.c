/*
 *
 * 7. Implemente uma função que receba um vetor de inteiros e seu tamanho, e
 * retorne a soma de seus elementos.
 *
 */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int vectorSum(int vec[], int size) {

 int soma = 0; // Inicializa a soma como 0
 for (int i = 0; i < size; i++) {
   soma += vec[i]; // Adiciona cada elemento do vetor à soma
 }
 return soma; // Retorna a soma total

}

int main() {

 setlocale(LC_ALL, "Portuguese");
 system("clear");

 int size;
 int vec[1000];

 printf("------- Soma de Vetor -------\n");
 printf("Escolha o tamanho: ");
 scanf("%d", &size);

 for (int i = 0; i < size; i++) {
  printf("Digite o elemento %d: ", i + 1);

  scanf("%d", &vec[i]); 
 }

 printf("--------------------------------\n");

 printf("A soma dos elementos do vetor é: %d\n", vectorSum(vec, size));

 return 0;
}
