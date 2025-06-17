/*
 * Escrever um programa que leia os elemntos de uma matriz inteira 3x3 e
 * imprimir outra matriz, multiplicando cada elemento da primeira matriz por 2.
 */

/**/
/*#include <stdio.h>*/
/*#include <stdlib.h>*/
/**/
/**/
/*int main() {*/
/**/
/* system("clear");*/
/**/
/* int m[3][3];*/
/**/
/* printf("Insira os números da matriz para dobrar: \n");*/
/**/
/* for (int i = 0; i < 3; i++) {*/
/*  for (int j = 0; j < 3; j++) {*/
/*   printf("Insira o elemento [%d][%d]: ", i + 1, j + 1);*/
/*   scanf("%d", &m[i][j]);*/
/*  }*/
/* }*/
/**/
/* printf("\n\n");*/
/**/
/* printf("A matriz original é: \n");*/
/* for (int i = 0; i < 3; i++) {*/
/*  for (int j = 0; j < 3; j++) {*/
/*   printf("%d ", m[i][j]);*/
/*  }*/
/*   printf("\n");*/
/* }*/
/**/
/* printf("\n\n");*/
/**/
/* printf("A matriz dobrada é: \n");*/
/* for (int i = 0; i < 3; i++) {*/
/*  for (int j = 0; j < 3; j++) {*/
/*   printf("%d ", m[i][j] * 2);*/
/*  }*/
/*   printf("\n");*/
/* }*/
/**/
/**/
/*}*/

#include <stdio.h>

int main() {

  int i, j;
  int matriz[3][3];

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &matriz[i][j]);
    }
    /*printf("%d", matriz[i][j]);*/
  }

 printf("\n -------------------- \n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      matriz[i][j] *= 2;
      printf("%d ", matriz[i][j]);
    }
  printf("\n");
  }

/*
 * 1 2 3
 * 4 5 6 
 * 7 8 9
 * 
 * 9 8 7
 * 6 5 4
 * 3 2 1
 *
 * */

  return 0;
}
