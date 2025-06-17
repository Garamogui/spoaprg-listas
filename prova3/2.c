#include <stdio.h>


int main() {
 int num = -583, soma = 0;
 while (num > 0 ) {
  soma += num % 10;
  num = num / 10;
 }


 printf("Soma: %d", soma);
}
