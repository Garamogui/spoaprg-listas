/*
Dado o total de vendas de um vendedor, calcule e imprima na saída a sua comissão conforme as condições abaixo: 
- Entre R%5000,00 e R%10000,00a comissão do vendedor é de 10% do total de vendas.
- Entre R%10000,00 e R%15000,00a comissão do vendedor é de 15% do total de vendas.
- Acima R%15000,00 a comissão do vendedor é de 20% do total de vendas.
*/


#include <locale.h>
#include <stdio.h>

int main() {
 setlocale(LC_ALL, "Portuguese");

 float price;


 printf("Calcule a sua comissão de vendas: \n\n");
 printf("Qual o valor vendido? ");
 scanf("%f", &price);

 if (price >= 5000 && price < 10000) {
  printf("\nA comissão é de R$%.2f\n", price*0.1);
 } else if (price >= 10000 && price < 15000){
  printf("\nA comissão é de R$%.2f\n", price*0.15);
 } else if (price >= 15000){
  printf("\nA comissão é de R$%.2f\n", price*0.2);
 } else {
  printf("\nNão há comissão para esse valor...\n");
 }


 return 0;
}
