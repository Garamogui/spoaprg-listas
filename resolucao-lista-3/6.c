#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  system("clear");

  char sex;
  float h, ideal_weight;

  printf("Digite a altura (em metros): ");
  scanf("%f", &h);

  // Limpa o buffer de entrada para garantir que não haja restos
  while (getchar() != '\n')
    ;

  printf("Qual o sexo?\n");
  printf("Digite 'M' para masculino e 'F' para feminino: ");
  if (scanf("%c", &sex) != 1) {
    printf("Erro ao ler o sexo.\n");
    return 1;
  }

  // Converte o caractere para maiúsculo
  sex = toupper(sex);

  if (sex == 'M') {
    ideal_weight = (72.7 * h) - 58;
  } else if (sex == 'F') {
    ideal_weight = (62.1 * h) - 44.7;
  } else {
    printf("Sexo inválido. Tente novamente.\n");
    return 1;
  }

  printf("\nO seu peso ideal é: %.2f kg\n ", ideal_weight);
  return 0;
}
