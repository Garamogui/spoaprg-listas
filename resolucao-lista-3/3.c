// Faça um programa que leia um número inteiro e verfique se esse número é par ou ímpar. 
# include <stdio.h>

int main () {
 int num1;

 printf("Insira um número para checar sua paridade: ");
 scanf("%d", &num1);

 if (num1 % 2 == 0 ) {
  printf("%d é  par.\n", num1);
 } else {
  printf("%d é  ímpar.\n", num1);
 }

}

