/*
 * Usando o comando switch, escreva um programa que leia um número inteiro entre 1 e 7 e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, segunda-feira, se 2, e assim por diante. 
*/


# include <stdio.h>

int main () {
 int week_day;

 printf("Insira o número correspondente ao dia da semana: ");
 scanf("%d", &week_day);

 printf("");

 switch (week_day) {
  case 1:
  printf("Domingo\n");
  break;

  case 2:
  printf("Segunda-Feira\n");
  break;

  case 3:
  printf("Terça-Feira\n");
  break;

  case 4:
  printf("Quarta-Feira\n");
  break;

  case 5:
  printf("Quinta-Feira\n");
  break;
  
  case 6:
  printf("Sexta-Feira\n");
  break;
  
  case 7:
  printf("Sábado\n");
  break;

  default:
  printf("Esse não pode ser um dia da semana.\n");
  break;
 }

 return 0;
}

