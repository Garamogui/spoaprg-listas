/*
 * Elabore um programa em C que mostre a tabuada do número 5.
*/

#include <stdio.h>
#include <locale.h>

int main () {
 setlocale(LC_ALL,"Portuguese");

 int n, multiply;
 n = 0;

 for (int i = 1; i <= 10 ; i++) {
  printf("5 ⏺%3d  = %3d \n", i ,i*5);
 }

}
