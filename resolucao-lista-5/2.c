/*
 * Desenvolva um programa que calcule a média das notas de alunos para uma turma de, no máximo, 100 alunos. O programa deve solicitar no início o tamanho da turma.
 */

#include <stdio.h>
#include <stdlib.h>

int main () {

 system("clear");

 float sum, grades[100];
 int size;
 double average;
 /*
  * "sum" vai ser igual à soma das notas;
  * "grades" para as notas, no máximo 100;
  * " average" para definir a média;
  * "size" para definir quantidade de notas.
  * */

 printf("Calcule a média de até 100 notas.");
 printf("\n---------------------------------\n");
 printf("Insira a quantidade de notas que quer calcular a média: \n");
 scanf("%d", &size); // ler o tamanho

 printf("\n---------------------------------\n");

 for (int i = 0; i < size; i++) {
  printf("%dª nota: ", i+1);
  scanf("%f", &grades[i]);
  sum += grades[i];
 }
 
 average = sum/size;

 printf("\n---------------------------------\n");

 printf("As notas são: [");
 for (int i = 0; i < size; i++) {
  if (i != size-1) {
   printf("%.2f, ", grades[i]);
  } else {

   printf("%.2f", grades[i]);
  }
 }
 printf("]\n ");
 printf("A média é: %.2f\n", average);
}
