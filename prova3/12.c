#include <stdio.h>


// this program must print the numbers '00 01 10 11 20 21'


int main() {
  int i, j;

  for (i = 0; i < 3; i++) {
    j = 0;
    while (j++ < 2) {
      printf("%02d ", i * 10 + j-1);
    }
  }
}
