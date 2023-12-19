#include <stdio.h>

void printarMatriz (int n, int m, int matriz[n][m]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int ePrimo(int num) {
    if (num == 0 || num == 1 || num == 2) {
        return 0;
    }
    
    int i = 2;
    while (num >= 2 && i != num) {
        if (num % i == 0 && i != num) {
            return 0;
        } else {
            i++;
        }
    }
    
    return 1;
}

int PosPrimoDiagPMatriz(int N, int M[N][N], int *TemPrimo) {
    int i, posicao = N - 1;
    (*TemPrimo) = 0;
    for (i = 0; i < N; i++) {
        if (ePrimo(M[i][i]) == 1) {
            (*TemPrimo) = 1;
            posicao = i;
            break;
        }
    }

    return posicao;
}; //return posição

void modMatrizCmPrimo(int tam, int matriz[tam][tam], int pos) {
    int i = 0, j;
    if (pos % 2 == 0) {
        i = 1;
    }

    for (; i < tam; i += 2) {
        if (i == pos) {
            continue;
        }
        for (j = 0; j < tam; j++) {
            matriz[j][i] *= matriz[pos][pos];
        }
    }
}

void modMatrizSmPrimo(int tam, int matriz[tam][tam]) {
    int pos = tam - 1;
    int i = 1, j;

    for (; i < tam; i += 2) {
        if (i == pos) {
            continue;
        }
        for (j = 0; j < tam; j++) {
            matriz[i][j] *= matriz[pos][pos];
        }
    }
}

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

    posicao = PosPrimoDiagPMatriz(tam, matriz, &temPrimo);
    
    if (temPrimo == 1) {
        modMatrizCmPrimo(tam, matriz, posicao);
    } else {
        modMatrizSmPrimo(tam, matriz);
    }

    printarMatriz(tam, tam, matriz);
    
    return 0;
}