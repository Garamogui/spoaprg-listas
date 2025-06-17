/**********************************
9.  Dado um vetor com até 100 inteiros, remova todos os elementos duplicados,
mantendo apenas o primeiro
**********************************/

#include <stdio.h>

int main() {
  int vec[100], temp[100];
  int n, k = 0;

  printf("Digite o número de elementos do vetor (máximo 100): ");
  scanf("%d", &n);

  // Garantir que o número de elementos não ultrapasse o limite
  if (n > 100) {
    printf("O número de elementos não pode ultrapassar 100.\n");
    return 1;
  }

  printf("Digite os elementos do vetor:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &vec[i]);
  }

  // Remover duplicados
  for (int i = 0; i < n; i++) {
    int existe = 0;

    // Verifica se o elemento já foi adicionado ao vetor temp
    for (int j = 0; j < k; j++) {
      if (vec[i] == temp[j]) {
        existe = 1;
        break;
      }
    }

    // Se não existe, adiciona ao vetor temp
    if (!existe) {
      temp[k] = vec[i];
      k++;
    }
  }

  // Copiar elementos de volta para o vetor original
  for (int i = 0; i < k; i++) {
    vec[i] = temp[i];
  }

  // Exibição do vetor sem duplicados
  printf("Vetor sem duplicados: ");
  for (int i = 0; i < k; i++) {
    printf("%d ", vec[i]);
  }
  printf("\n");

  return 0;
}
