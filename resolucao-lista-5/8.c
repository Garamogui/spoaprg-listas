/*
 * Programa que possua matriz 2x2 de números inteiros e some cada uma das linhas da matriz.
 *
 * 1. Pedir ao usuário os elementos da matriz;
 * 2. Gravar matriz em variáveis;
 * 3. Passar por cada elemento da matriz e somar suas linhas;
 * 4. Guardar a soma em um vetor;
 * 5. Imprimir a matriz para o usuário;
 * 6. imprimir o vetor para o usuário;
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>


int main(){
 // itens desnecessários
 system("clear");
 setlocale(LC_ALL, "Portuguese");

 int i, j, m[2][2], v[2];

 printf("Insira os elementos da matriz: \n");

 /* 1. Pedir ao usuário os elementos da matriz; */
 for (i = 0; i < 2; i++) {
  for (j = 0; j < 2; j++) {
   printf("Insira o elemento [%d][%d]: ", i + 1 , j +1 );
   scanf("%d", &m[i][j]);
  }
 }

 /*
  * 2. Gravar matriz em variáveis; 
  * 3. Passar por cada elemento da matriz e somar suas linhas;
  * 4. Guardar a soma em um vetor;                             
 */

 /*  vetor
  [0, 1]
  */

 /* matriz
  [00, 01]
  [10, 11]
  *
  */


 /*v[0] = m[0][0] + m[1][0];*/
 /*v[1] = m[0][1] + m[1][1];*/
 for (i = 0 ; i < 2 ; i++) {
  for (j = 0; j < 2 ; j++) {
   v[i] += m[j][i];
  }
 }


 /* imprima a matriz */
 printf("\n--------------------\n\n");
 printf("A matriz digitada é: \n\n");
 for (i = 0; i < 2; i++) {
  for (j = 0; j < 2; j++) {
   printf("%d ", m[i][j]);
  }
   printf("\n");
 }
 printf("\n\n--------------------\n\n");


 /* imprima o vetor */
 printf("o vetor digitado é: \n\n");
 for (i = 0; i < 2; i++) {
   printf("%d, ", v[i]);
 }
 printf("\n\n--------------------\n");
}
