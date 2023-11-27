#include <stdio.h>
 
void insertionSort(int *vet, int tam) {
  int chave, j;
  
  int i = 1;
  for (; i < tam; i++) {
    chave = vet[i];
    j = i - 1;
 
    while(j >= 0 && vet[j] > chave) {
      vet[j + 1] = vet[j];
      j--;
    }
 
    vet[j + 1] = chave;
  }
}
 
void reverseInsertionSort(int *vet, int tam) {
  int chave, j;
  
  int i = 1;
  for (; i < tam; i++) {
    chave = vet[i];
    j = i - 1;
 
    while(j >= 0 && vet[j] < chave) {
      vet[j + 1] = vet[j];
      j--;
    }
 
    vet[j + 1] = chave;
  }
}
 
void printVet(int *vetor, int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("%d\n", vetor[i]);
    }
}
 
int main() {
    int quantidade;
    scanf("%d", &quantidade);
    
    int i, numeros[quantidade];
    int pares = 0;
    int impares = 0;
    for (i = 0; i < quantidade; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
 
    int j = 0;
    int k = 0;
    int numPares[pares], numImpares[impares];
    for (i = 0; i < quantidade; i++) {
        if (numeros[i] % 2 == 0) {
            numPares[j] = numeros[i];
            j++;
        } else {
            numImpares[k] = numeros[i];
            k++;
        }
    }
 
    insertionSort(numPares, pares);
    reverseInsertionSort(numImpares, impares);
    
    printVet(numPares, pares);
    printVet(numImpares, impares);
 
    return 0;
}