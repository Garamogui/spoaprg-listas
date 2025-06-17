/* 
 *  Escreva um programa para obter os valores de uma matriz 6x6 de números inteiros. depois da leitura dos dados, o programa deve calcular a soma dos elementos da diagonal principal. em seguida, deverá ser apresentado os valores da matriz e o da soma.
*/


#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main() {

 /*Coisas inúteis*/
 system("clear");
 setlocale(LC_ALL, "Portuguese");

 /*Variáveis iniciais:*/
 int m[6][6], i, j, sum;

 printf("Escreva os elementos da matriz.\n");

 /*Usuário entra os elementos da matriz.*/
 for (i = 0 ; i < 6; i++) {
  for (j = 0 ; j < 6; j++) {
   printf("Insira o elemento [%d][%d]: ", i + 1, j + 1);
   scanf("%d", &m[i][j]);
  }
 }

 printf("\n");

 /*Imprimir a matriz*/
 printf("\n- - - - - -\n");
 printf("Matriz 6x6: \n");
 for (i = 0 ; i < 6; i++) {
  for (j = 0 ; j < 6; j++) {
   printf("%d ", m[i][j]);
  }
  printf("\n");
 }

 /*Imprimir a soma: */
 for (i = 0 ; i < 6; i++) {
  sum += m[i][i];
 }
 printf("Soma: %d \n", sum);
}


