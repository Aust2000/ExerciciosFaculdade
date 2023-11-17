#include <stdio.h>

// insertionSort: ordena o vetor de entrada e retorna a soma dos números do vetor
int insertionSort(int *vet, int tam) {
  int chave, j;
  int soma = vet[0];
  
  int i = 1;
  for (; i < tam; i++) {
    soma += vet[i];
    chave = vet[i];
    j = i - 1;

    while(j >= 0 && vet[j] > chave) {
      vet[j + 1] = vet[j];
      j--;
    }

    vet[j + 1] = chave;
  }

  return soma;
}

int main() {
    int casos, nums[9], anoes[7], valor, teste = 0;
    scanf("%d", &casos);

    int n = 0;
    while (n < casos) {
        int i = 0;
        for (; i < 9; i++) {
            scanf("%d", &nums[i]);
        }
        
        valor = insertionSort(nums, 9);
        valor -= 100;

        int j = 0;
        int k = 0;
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                if (i == j) {
                    continue;
                }
                if (nums[i] + nums[j] == valor) {
                    teste = 1;
                }
            }

            if (teste == 0) {
                anoes[k] = nums[i];
                k++;
            } else {
                teste = 0;
            }
        }

        for (i = 0; i < 7; i++) {
            printf("%d\n", anoes[i]);
        }

        n++;
    }
    
    return 0;
}