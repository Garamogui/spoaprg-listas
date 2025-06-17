/*
 Elabore um programa em C que mostre a tabuada de qualquer número 
 escolhido pelo usuário. 
 */

#include <stdio.h>
#include <locale.h>

int main () {
 setlocale(LC_ALL,"Portuguese");

 int n, multiply;

 printf("Escolha um número para fazer tabuada. \n");
 scanf("%d", &n);

 printf("\nTabuada do %d\n", n);
 printf("==============\n");

 for (int i = 0; i <= 10; i++) {
  multiply = n * i;
  printf("%d  ⏺%3d = %3d \n", n, i, multiply );
 }

 return 0;
}
