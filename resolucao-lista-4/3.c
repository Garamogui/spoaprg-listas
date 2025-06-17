/*
Faça um programa que leia um número inteiro positivo N e imprima todos os númeor naturais de 0 até N em ordem crescente.
 */

#include <stdio.h>
#include <locale.h>

int main () {
 setlocale(LC_ALL,"Portuguese");

 int n;

 printf("Escolha um número para listar seus anteriores.\n");
 scanf("%d", &n);

 printf("\nOs números são:\n");

 for (int i = 0; i <= n; i++) {
  if (i != 0) {
   printf("; %d", i);
  } else {
   printf("%d", i);
  }
 }
 printf("\n");

 return 0;
}
