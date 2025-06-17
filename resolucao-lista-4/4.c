/*
 Faça um programa que leia um número inteiro e positivo, N, e imprima todos os números naturais de 0 até N, em ordem decrescente.
 */

#include <stdio.h>
#include <locale.h>

int main () {
 setlocale(LC_ALL,"Portuguese");

 int n;

 printf("Escolha um número para listar seus anteriores, em ordem decrescente.\n");
 scanf("%d", &n);

 printf("\nOs números são:\n");

 for (int i = n; i >=0 ; i--) {
  if (i == 10) {
   printf("%d", i);
  } else {
   printf("; %d", i);
  }
 }
 printf("\n");

 return 0;
}
