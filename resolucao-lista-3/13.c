/*
 *
 * Faça um programa que mostre ao usuário um menu com quatro opções de operações
 * matemáticas ( as operações básicas, por exemplo). O usuário escolhe uma das
 * opções, e o seu programa pede dois valores numéricos e realiza a operação,
 * mostrando o resultado.
 *
 * */

#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int escolha;

  float num1, num2, operacao;

  printf("Escolha dois números: \n");
  scanf("%f", &num1);
  scanf("%f", &num2);

  printf("\nEscolha a operação: \n");
  printf("1 para adição\n");
  printf("2 para subtração\n");
  printf("3 para multiplicação\n");
  printf("4 para divisão\n");
  scanf("%d", &escolha);

  switch (escolha) {
  case 1:
    operacao = num1 + num2;
    printf("O resultado é %.2f\n", operacao);
    break;
  case 2:
    operacao = num1 - num2;
    printf("O resultado é %.2f\n", operacao);
    break;
  case 3:
    operacao = num1 * num2;
    printf("O resultado é %.2f\n", operacao);
    break;
  case 4:
    if (num2 == 0) {
      printf("Operação Inválida\n");
      break;
    }
    operacao = num1 / num2;
    printf("O resultado é %.2f\n", operacao);
    break;

  default:
    printf("Operação inválida.\n");
  }

  return 0;
}
