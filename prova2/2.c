#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main() {

 /*Coisas inúteis*/
 system("clear");
 setlocale(LC_ALL, "Portuguese");

 /*Variáveis iniciais:*/
 int v[1000], i, sum = 0, multiple = 1,  size = 0;

 printf("Multiplique o vetor: \n");
 printf("\n- - - - - - - - - - - -\n\n");
 printf("Escolha um número máximo de elementos para o vetor: ");
 scanf("%d", &size);
 printf("Escolha um multiplicador: ");
 scanf("%d", &multiple);

 /*Usuário entra os elementos do vetor.*/
 for (i = 0 ; i < size ; i++) {
  printf("Insira o elemento [%d]: ", i + 1);
  scanf("%d", &v[i]);
  if (v[i] > 30) {
   size++;
  }
 }

 /*Imprimir o vetor*/
 printf("\n- - - - - -\n");
 printf("Números selecionados: \n");
 for (i = 0 ; i < size; i++) {
  printf("%d ", v[i]);
 }
 /*Imprimir a multiplicação:*/
 printf("\n- - - - - -\n");
 printf("Multiplicando: ");
 for (i = 0 ; i < size; i++) {
  printf("%d ", v[i]*multiple);
 }

 printf("\n\n\n");

}
