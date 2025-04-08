
#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("clear");

    int conta_cliente;
    char tipo_consumidor;
    float consumo_m3, valor_total = 0;

    printf("Digite o número da conta do cliente: ");
    scanf("%d", &conta_cliente);

    printf("Digite o consumo de água em m³: ");
    scanf("%f", &consumo_m3);

    printf("Digite o tipo de consumidor (R - Residencial, C - Comercial, I - Industrial): ");
    scanf(" %c", &tipo_consumidor);

    tipo_consumidor = toupper(tipo_consumidor); // garantir maiúscula

    if (tipo_consumidor == 'R') {
        valor_total = 5.00 + (0.05 * consumo_m3);
    } else if (tipo_consumidor == 'C') {
        if (consumo_m3 <= 80) {
            valor_total = 500.00;
        } else {
            valor_total = 500.00 + (consumo_m3 - 80) * 0.25;
        }
    } else if (tipo_consumidor == 'I') {
        if (consumo_m3 <= 100) {
            valor_total = 800.00;
        } else {
            valor_total = 800.00 + (consumo_m3 - 100) * 0.04;
        }
    } else {
        printf("Tipo de consumidor inválido.\n");
        return 1;
    }

    printf("\n--- Conta de Água ---\n");
    printf("Conta nº: %d\n", conta_cliente);
    printf("Consumo: %.2f m³\n", consumo_m3);
    printf("Valor a pagar: R$ %.2f\n", valor_total);

    return 0;
}
