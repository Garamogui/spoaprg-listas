#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main() {

 /*Coisas inúteis*/
 system("clear");
 setlocale(LC_ALL, "Portuguese");

 /*Variáveis iniciais:*/
 int v[8], i, sum = 0, big[8], size = 0;

 printf("Escreva os elementos do vetor.\n");

 /*Usuário entra os elementos do vetor.*/
 for (i = 0 ; i < 8; i++) {
  printf("Insira o elemento [%d]: ", i + 1);
  scanf("%d", &v[i]);
  if (v[i] > 30) {
   big[size] = v[i];
   size++;
  }
 }

 printf("\n");

 /*Imprimir o vetor*/
 printf("\n- - - - - -\n");
 printf("Números selecionados: \n");
 for (i = 0 ; i < 8; i++) {
  printf("%d ", v[i]);
 }

 /*Imprimir o vetor big:*/
 printf("\n- - - - - -\n");
 printf("Números selecionados (maiores que 30): \n");
 for (i = 0 ; i < 8; i++) {
  if (big[i] != 0 ) {
   printf("%d ", big[i]);
  }
 }

  printf("\n");
 /*Imprimir a soma: */
 for (i = 0 ; i < 8; i++) {
  if (big[i] != 0 ) {
   sum += big[i];
  }
 }
 printf("Soma: %d \n", sum);
}


