/*

Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
- For maior que 20% do salário, imprima: "Empŕestimo não concedido."
- Caso contrário, imprima: "Empréstimo concedido."
*/

#include <stdio.h>
#include <locale.h>

int main() {

 setlocale(LC_ALL, "pt_BR.UTF-8");

 // variables
 float salary, installments, percentage;

 // get data
 printf("Para checar a elegibilidade, digite o tamanho do salário: ");
 scanf("%f", &salary );
 printf("Agora, digite o valor da prestação: ");
 scanf("%f", &installments );

 //operations
 percentage = (installments / salary)*100;

 if (percentage > 20) {
  printf("Empréstimo não concedido.\n");
 } else {
 
  printf("Empréstimo concedido!\n");
 }

 return 0;
}
