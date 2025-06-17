/*
    (Resolvido pelo Márcio)
    Lista 5 - Exercício 5
    
    Escreva um programa que leia doze números do tipo inteiro ao usuário. Separe
    esses números em pares e ímpares e os armazenem em dois outros vetores. Em
    seguida, o programa deverá apresentar os resultados na tela.
*/

#include <stdio.h>

int main()
{
    int p[12], im[12];
    int i, t;
    int tam1, tam2;
    
    printf("digite os valores abaixo: \n");
    
    for(i = 0; i < 12; i++)
    {
        scanf("%d", &t);
  
/*Cada valor é armazenado em uma variável "t", e durante cada ciclo do laço,
  é testado se o numero digitado é divisível por 
  
*/      
        if(t%2 == 0)
        {
            p[tam1] = t;
            tam1++;
        }
        else if(t!=0)
        {
            im[tam2]  = t;
            tam2++;

        }

    }
    
    
    for(i = 0; i < tam1; i++)
    {
        printf("vetor de pares = %d \n", p[i]);
    }
    
        for(i = 0; i < tam2; i++)
    {
        printf("vetor de impares = %d \n", im[i]);
    }
    
}
