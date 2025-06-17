#include <stdio.h>

int main () {
 int biggest, arr[5];

 // Pedir para o usuário escolher os númerso: 
 printf("Escolha 5 números para descorbrir o maior.\n");

 // Loop para pegar cada número.
 //
 //
 
 for (int i = 0 ; i < 5 ; i++) { // Para i = 0, enquanto i for menor que 5, incremente 1 ao i.
  printf("Escolha o %dº número: ", i+1);
  scanf("%d", &arr[i]); //ler o número dado pelo usuário.
 }
 biggest = arr[0]; //definir o maior como um ńumero qualquer.

 for (int i = 0 ; i < 5 ; i++) { // passa por todos os números do Vetor.
  if (arr[i] > biggest) { // se o arr[i] for maior que o número "biggest"
   biggest = arr[i]; // defina biggest como arr[i].
  }
 }
 printf("O maior número é: %d \n" ,biggest); //imprima o maior número
}
