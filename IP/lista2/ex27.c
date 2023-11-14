#include <stdio.h>

int max(int v1, int v2) {
  if (v1 >= v2) {
    return v1;
  }
  return v2;
}

void ordenacaoInsercao(int *vet, int tam) {
  int chave;
  int i;

    
  for (; j < tam; j++) {
    chave = vet[j];
    i = j - 1;

    while (i >= 0 && vet[i] > chave) {
      vet[i + 1] = vet [i];
      i--;
    }

    vet[i + 1] = chave;
  }
}

void lerVet(int *vet, int tam) {
  int i = 0;
  
  while (i < tam) {
    scanf("%d", &vet[i]);
    i++;
  }
}

int main() {
  int q1, q2;
  scanf("%d", &q1);
  scanf("%d", &q2);

  int vet1[q1], vet2[q2];

  lerVet(vet1, q1);
  lerVet(vet2, q2);

  ordenacaoInsercao(vet1, q1);
  ordenacaoInsercao(vet2, q2);

  int resultado[q1 + q2];
  int i = 0;
  int j = 0;
  while ((i + j) < (q1 + q2)) {
    
    if (vet1[i] <= vet2[j] || j >= q2) {
      resultado[i + j] = vet1[i];
      i++;
    }
    else {
      resultado[i + j] = vet2[j];
      j++;
    }
  }

  for(i = 0; i < (q1 + q2); i++) {
    printf("%d\n", resultado[i]);
  }

  return 0;
}