#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main () {
 system("clear");
 setlocale(LC_ALL, "Portuguese");
 
 int v[1000], size, search[1000], search_term, search_size;

 printf("Escolha um tamanho de lista, insira os termos, e pesquise os que quiser...");
 printf("\n--------------------------------------------------------------------------\n");
 printf("Defina um tamanho para a lista: ");
 scanf("%d", &size);

 printf("Insira os termos.\n");
 for (int i = 0; i < size; i++) {
  printf("Insira o termo [%d]: ", i+1 );
  scanf("%d", &v[i]);
 }

 printf("Qual número quer pesquisar? ");
 scanf("%d", &search_term);


}
