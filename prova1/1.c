/*

Um corretor de imóveis pratica os seguintes valores de corretagem na venda de
imóveis:
- Para venda de imóveis urbanos, 6%
- Para venda de imóveis rurais, 8%
- Para venda judicial, 5%

Simule esse cenário informando o valor do imóvel e o tipo de imóvel da venda.

*/

#include <locale.h>
#include <stdio.h>

int main() {
 setlocale(LC_ALL, "Portuguese");

 int choice;
 float price;

 printf("Cálculo de comissão do corretor.\n\n\n");
 printf("Insira o valor da venda:\n");
 scanf("%f", &price);

 printf("\nEscolha o tipo de venda:\n");
 printf("1: Venda de imóveis urbanos.\n");
 printf("2: Venda de imóveis rurais.\n");
 printf("3: Venda de imóveis judicial.\n");
 scanf("%d", &choice);


 switch (choice) {
  default:
  printf("Opção inválida\n");
    break;
  case 1:
   printf ( "O valor da comissão é de: %.2f\n", price*0.06 );
   break;
  case 2:
   printf ( "O valor da comissão é de: %.2f\n", price*0.08 );
   break;
  case 3:
   printf ( "O valor da comissão é de: %.2f\n", price*0.05 );
   break;
 }

 return 0;
}
