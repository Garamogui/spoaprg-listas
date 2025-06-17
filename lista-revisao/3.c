/*
 
 Leia dois vetores A e B de tamanho N e calcule o produto escalar: 

 P = A[0] * B[0] + A[1] + B[1] ... + A[N-1] + B[N-1]

*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main () {

 setlocale(LC_ALL, "pt-br");
 system("clear");

 int a[100], b[100], product = 0, n;

 printf("Insira o número de elementos dos Vetores: \n");
 scanf("%d", &n);

 printf("Insira o vetor A: \n");
 for (int i = 0; i < n; i++) {
  scanf("%d", &a[i]);
 }

 printf("Insira o vetor B: \n");
 for (int i = 0; i < n; i++) {
  scanf("%d", &b[i]);
 }


 for (int i = 0; i < n; i++) {
  product += (a[i] * b[i]);
 }

 printf("Produto: %d\n", product);

}
