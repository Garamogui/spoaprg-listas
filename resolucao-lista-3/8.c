
// #include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  system("clear");

  int age;

  printf("Digite a idade do Nadador: ");
  scanf("%d", &age);

 if (age < 5) {
    printf("Nadador Iniciante\n");
  } else if (age >= 5 && age <= 7) {
    printf("Nadador Infantil A\n");
  } else if (age >= 8 && age <= 10) {
    printf("Nadador Infantil B\n");
  } else if (age >= 11 && age <= 13) {
    printf("Nadador Juvenil A\n");
  } else if (age >= 14 && age <= 17) {
    printf("Nadador Juvenil B\n");
  } else {
    printf("Nadador Adulto\n");
  }

  return 1;
 
}
