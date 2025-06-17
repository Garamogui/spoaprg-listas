/*6. Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros  A e B. A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A. A Essa função não deverá possuir retorno. mas deverá modificar o valor da primeiro parâmatro. Ao final, imprima A e B na função main.*/


#include <stdio.h>
#include <stdlib.h>

void sum_A_B(int* A, int B) {
  *A = *A + B;
  printf("A: %d\n", *A);
  printf("B: %d\n", B);
}


int main()
{
  system("clear");

  int A, B;

  printf("Digite o primeiro valor inteiro (A): ");
  scanf("%d", &A);
  printf("Digite o primeiro valor inteiro (B): ");
  scanf("%d", &B);

  // Chama a função sum passando o endereço de A e o valor de B
  sum_A_B(&A, B);
}
