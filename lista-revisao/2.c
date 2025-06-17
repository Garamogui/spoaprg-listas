/*

Considere um número como "pico" se ele é maior que seus vizinhos imediatos. Dado um vetor de inteiros, conte quantos picos existem.

 */

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
 system("clear");
 setlocale(LC_ALL, "Portuguese");

 float userVector[100]; 
 int n, peaks = 0;

 printf("Insira o número de Elementos do Vetor: \n");
 scanf("%d", &n);

 printf("Insira os Elementos do Vetor: \n");
 for (int i = 0; i < n; i++){
  scanf("%f", &userVector[i]);
 }

 for (int i = 0; i < n; i++) {
  if (userVector[i] > userVector [i - 1] && userVector[i] > userVector[i + 1]) {
   peaks++;
  }
 printf("Nº de Picos: %d\n", peaks);
 }

 printf("\n===========\n");

 printf("Nº de Picos: %d\n", peaks);
} 
