/*

Dado um vetor de N elementos, crie um novo vetor onde cada posição (exceto a
primeira e a última) seja substituída pela média dos seus dois vizinhos.

*/

#include <locale.h>
#include <stdio.h>

int main() {
 setlocale(LC_ALL, "Portuguese");

 float userVector[100], copyVector[100], n, sum;

 printf("Insira o número de Elementos do Vetor: \n");
 scanf("%f", &n);

 printf("Insira os Elementos do Vetor: \n");
 for (int i = 0; i < n; i++){
  scanf("%f", &userVector[i]);
 }

 for (int i = 0; i < n; i++) {
  if (i == 0 || i == n - 1) {
   copyVector[i] = userVector[i];
  } else {
   sum = userVector[i - 1] + userVector[i + 1];
   copyVector[i] = sum / 2;
  }
 }
 
 printf("\nVetor original: \n");
 printf("[");
 for (int i = 0; i < n; i++) {
  if (i != n - 1) {
   printf("%.2f, ", userVector[i]);
  } else {
   printf("%.2f", userVector[i]);
  }
 }
 printf("]\n");

 printf("\nVetor novo: \n");
 printf("[");
 for (int i = 0; i < n; i++) {
  if (i != n - 1) {
   printf("%.2f, ", copyVector[i]);
  } else {
   printf("%.2f", copyVector[i]);
  }
 }
 printf("]\n");
 
}


/*
user: n1 n2 n3 n4 n5 n6 n7 n8 n9 n10 n11 n12 n13 n14 n15 n16 n17 n18 n19 n20 n21

copy: n1 n2 n3 n4 n5 n6 n7 n8 n9 n10 n11 n12 n13 n14 n15 n16 n17 n18 n19 n20 n21
*/
