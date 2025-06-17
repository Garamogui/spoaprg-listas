/*
 * 1 - pedir um número para o usuário e armazenar (n).
 * 2.1 - definir um loop que incremente de 0 até o número N.
 * 2.2 - somar 1+ 1/2 + 1/3 ... até a fração do número escolhido pelo usuário.
 */
#include <stdlib.h>
#include <stdio.h>

int main(){

 system("clear");

 int h, i;
 float Op, n = 0; 

 printf("Insira um número para descobrir o número harmonico: ");
 scanf("%d", &h);

 for (i = 1; i <= h ; i++) {
  n++;
  Op = Op + 1/n;
 }
 printf("O número harmônico é: %f \n", Op);
}
