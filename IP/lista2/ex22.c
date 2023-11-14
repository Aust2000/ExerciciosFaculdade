#include <stdio.h>
#include <math.h>

// retirarDigito: recebe um número, o tamanho desse número e a posição indexada do digito a ser retirado e retorna o número sem o dígito na posição
int retirarDigito(int num, int tam, int i) {
  int pos = tam - i - 1;
  int algarismo = (int)(num / pow(10, tam - i - 1)) - ((int)(num / pow(10, tam - i)) * 10);
  num -= algarismo * pow(10, pos);
  int resto = num / pow(10, pos + 1);
  num -= resto * pow(10, pos + 1);
  num += resto * pow(10, pos);
  return num;
}

int main() {
  int tam, obj, num, algarismo;
  int vetPos[obj];
  scanf("%d %d", &tam, &obj);
  scanf("%d", &num);

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

  // essa parte itera pelas posições a serem retiradas e retira todas do número
  int porra = 0;
  for (i = 0; i < obj; i++) {
    num = retirarDigito(num, (tam - porra), (vetPos[i] - porra));
    porra++;
  }

  printf("%d", num);

  return 0;
}