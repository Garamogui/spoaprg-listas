// complete o while abaixo para imprimir os 10 primeiros número da sequência de fibonnacci


#include <stdio.h>
int main() {
 int a = 0, b = 1, c, i = 2;
 printf("%d %d", a, b);

 while (i < 10) {
  c = a + b;
  printf(" %d", c);
  a = b;
  b = c;
  i++;
  
 }
}
