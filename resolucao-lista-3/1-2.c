// Programa que leia dois números e mostre qual deles é o maior.


#include <stdio.h>

int main () {
 int num1, num2;
 printf("Digite o primeiro número: ");
 scanf("%d", &num1);
 printf("Digite o segundo número: ");
 scanf("%d", &num2);


 if (num1 > num2) {
  printf("O número maior é %d", num1);
 } else if (num1 < num2) {
  printf("O número maior é %d", num2);
 } else {
  printf("Os números %d e %d são equivalentes. \n", num1, num2);
 }


 return 0;
 
}
