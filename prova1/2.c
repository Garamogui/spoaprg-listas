
/*

Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. AS condições para aposentadoria são: 
- Ter pelo menos 65 anos;
- Ou ter trabalhado pelo menos 30 anos, 
- Ou ter pelo menos 60 anos e trabalhado  pelo menos 25 anos.

*/

#include <locale.h>
#include <stdio.h>

int main() {
 setlocale(LC_ALL, "Portuguese");

 int age, time_working;
 int is_retirement_possible;


 printf("Descubra se você já pode se aposentar.\n\n\n");
 printf("Insira a sua idade.\n\n\n");
 scanf("%d", &age);
 printf("Insira seu tempo de trabalho (em anos).\n\n\n");
 scanf("%d", &time_working);

 if (age >= 65 || time_working >=30) {
  printf("\n\nParabéns! Você já pode se aposentar!!! 🎉\n");
 } else if (age >= 60 && time_working >= 25){
  is_retirement_possible = 1;
  printf("\n\nParabéns! Você já pode se aposentar!!! 🎉\n");
 } else {
  is_retirement_possible = 0;
  printf("\n\nInfelizmente, você ainda não pode se aposentar. 😢\n");
 }

 return 0; 
}
