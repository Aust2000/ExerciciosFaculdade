#include <stdio.h>

int ePrimo(int num) {
    if (num == 0) {
        return 0;
    }
    
    int i = 3;
    while (num >= 2 && i != num) {
        if (num % i == 0 && i != num) {
            return 0;
        } else {
            i++;
        }
    }
    
    return 1;
}

int PosPrimoDiagPMatriz(int M[500][500], int N, int *TemPrimo) {
    int i, posicao = N - 1;
    *TemPrimo = 0;
    for (i = 0; i < N; i++) {
        if (ePrimo(M[i][i]) == 1) {
            *TemPrimo = 1;
            posicao = i;
            break;
        }
    }

    return posicao;
}; //return posição

int main() {
    int tam;
    scanf("%d", &tam);

    int matriz[tam][tam];
    int i, j;
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int temPrimo, posicao;


    posicao = PosPrimoDiagPMatriz(matriz, tam, &temPrimo);
    printf("%d", posicao);
    
    return 0;
}