#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

int criarResposta(int num, int tam, int tamRes, int *posicoes) {
  int pos, algarismo;
  int resultado = 0;
  int j = 0;
  int k = 0;
  
  //esse loop lê o número original e cria o número resultado ao adicionar os algarismos que não estão na lista dos que devem ser removidos
  int i = 0;
  for (; i < tam; i++) {
    if (posicoes[j] != i || j >= tamRes) {
      algarismo = (int)(num / pow(10, tam - i - 1)) - ((int)(num / pow(10, tam - i)) * 10);
      resultado += algarismo * pow(10, tamRes - k - 1);
      k++;
    } else {
      j++;
    }
  }

  return resultado;
}

int main() {
  int tam, obj, num, algarismo;
  int *vetPos;
  
  //esse loop faz com que o programa rode enquanto não é colocado o input 0 0
  while (1) {
    scanf("%d %d", &tam, &obj);
    if (tam == 0 && obj == 0) {
      break;
    }
    scanf("%d", &num);

    vetPos = (int*)malloc(obj * sizeof(int));

    // essa parte descobre qual o menor dígito no número
    int menor = 9;
    int i;
    for (i = 0; i < tam; i++) {
      algarismo = (int)(num / pow(10, tam - i - 1)) - ((int)(num / pow(10, tam - i)) * 10);
      if (algarismo < menor) {
        menor = algarismo;
      }
    }

    // essa parte fica iterando pelo número repetidamente até encontrar todos os dígitos a serem removidos
    int j = 0;
    // o while vai rodar enquanto ainda tiverem números a serem retirados
    while (j < obj) {
      //o for representa uma iteração completa pelos dígitos do número
      for (i = 0; i < tam; i++) {
        algarismo = (int)(num / pow(10, tam - i - 1)) - ((int)(num / pow(10, tam - i)) * 10);
        if (algarismo == menor) {
          vetPos[j] = i;
          j++;
        }

        if (j >= obj) {
          break;
        }
      }

      menor++;
    }
    insertionSort(vetPos, obj);

    //a criação da int com a resposta
    printf("%d\n", criarResposta(num, tam, obj, vetPos));

    free(vetPos);
  }

  return 0;
}