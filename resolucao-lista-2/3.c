// Escreva um programa que leia um número inteiro e depois imprima a mensagem "Valor lido" seguido do número lido. Use apenas um comando printf().

#include <stdio.h>

int main () {
 int num;

 printf("Digite um número inteiro: ");
 scanf("%d", &num);
 printf("Valor lido: %d\n", num);

 return 0;
}

