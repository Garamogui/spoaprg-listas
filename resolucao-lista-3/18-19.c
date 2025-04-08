#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  system("clear");

  // variáveis
  int dia_semana;
  char tipo_pagamento, tipo_fita;
  float valor_fita, valor_total = 0, desconto = 0;

  // entrada de dados
  printf("Digite o dia da semana (1-7): ");
  scanf("%d", &dia_semana);

  printf("Digite o tipo de pagamento ('X' - Pix, 'C' - Cartão, 'D' - Débito, 'V' - Crédito à Vista, 'P' - Crédito Parcelado): ");
  scanf(" %c", &tipo_pagamento); // espaço antes de %c ignora o ENTER anterior
  tipo_pagamento = toupper(tipo_pagamento);

  printf("Digite o tipo de fita ('C' para comuns, 'L' para lançamentos): ");
  scanf(" %c", &tipo_fita);
  tipo_fita = toupper(tipo_fita);

  printf("Por fim, digite o valor da fita: R$ ");
  scanf("%f", &valor_fita);

  // tipo de fita
  if (tipo_fita == 'L') {
    desconto -= 0.15; // 15% de acréscimo (desconto negativo)
  }

  // dia da semana
  switch (dia_semana) {
    case 1:
    case 4:
    case 6:
    case 7:
      break; // Sem desconto
    case 2:
    case 3:
    case 5:
      desconto += 0.40; // 40% de desconto
      break;
    default:
      printf("Dia inválido.\n");
      return 1;
  }

  // tipo de pagamento
  switch (tipo_pagamento) {
    case 'X': // Pix
      desconto += 0.15;
      break;
    case 'D': // Débito
      desconto += 0.10;
      break;
    case 'V': // Crédito à vista
      desconto += 0.05;
      break;
    default:
      break; // Outros métodos sem desconto extra
  }

  // cálculo final
  valor_total = valor_fita * (1 - desconto); // se desconto for negativo, gera acréscimo

  // saída
  printf("\n--- Resultado ---\n");
  printf("Valor da fita: R$ %.2f\n", valor_fita);
  printf("Desconto final aplicado: %.2f%%\n", desconto * 100);
  printf("Valor a pagar: R$ %.2f\n", valor_total);

  return 0;
}
