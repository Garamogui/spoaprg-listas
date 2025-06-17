#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main() {

 /*Coisas inúteis*/
 system("clear");
 setlocale(LC_ALL, "Portuguese");

 /*Variáveis iniciais:*/
 int v[1000], i, number;

 printf(" ------ Tabuada ------\n");
 printf("Escolha o número: ");
 scanf("%d", &number);

 printf(" ------ Resultado ------\n");
 for (i = 1; i <= 10; i++ ){
  printf("%3d x %2d = %3d \n", number, i, number * i);
 }

}
