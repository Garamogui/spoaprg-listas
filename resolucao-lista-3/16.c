#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  float salario_minimo, salario_funcionario, imposto_bruto = 0, taxa_extra = 0;
  float imposto_total, imposto_pago, imposto_a_pagar;
  int dependentes;

  printf("Digite o valor do salário mínimo: R$ ");
  scanf("%f", &salario_minimo);
  while (getchar() != '\n') ; // Limpa o buffer

  printf("Digite o número de dependentes: ");
  scanf("%d", &dependentes);
  while (getchar() != '\n') ; // Limpa o buffer

  printf("Digite o salário do funcionário: R$ ");
  scanf("%f", &salario_funcionario);
  while (getchar() != '\n') ; // Limpa o buffer

  printf("Digite o valor do imposto já pago: R$ ");
  scanf("%f", &imposto_pago);
  while (getchar() != '\n') ; // Limpa o buffer

  if (salario_funcionario > 12 * salario_minimo) {
    imposto_bruto = 0.20 * salario_funcionario;
  } else if (salario_funcionario > 5 * salario_minimo) {
    imposto_bruto = 0.08 * salario_funcionario;
  } else {
    imposto_bruto = 0.0; // isento
  }

  // taxa adicional
  taxa_extra = 0.04 * imposto_bruto;
  imposto_total = imposto_bruto + taxa_extra;

  // cáculo final
  imposto_a_pagar = imposto_total - imposto_pago;

  // Saída
  printf("\n--- Resultado ---\n");
  printf("Imposto Bruto: R$ %.2f\n", imposto_bruto);
  printf("Taxa adicional (4%%): R$ %.2f\n", taxa_extra);
  printf("Imposto Total Devido: R$ %.2f\n", imposto_total);

  if (imposto_a_pagar > 0) {
    printf("Imposto a pagar: R$ %.2f\n", imposto_a_pagar);
  } else if (imposto_a_pagar < 0) {
    printf("Imposto a restituir: R$ %.2f\n", -imposto_a_pagar);
  } else {
    printf("Não há imposto a pagar ou restituir.\n");
  }

  return 0;
}
