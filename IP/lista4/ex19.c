#include <stdio.h>
#include <string.h>

void copiarMatriz(double **orig, double **dest, int linha, int coluna) {
    int i, j;
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            dest[i][j] = orig[i][j];
        }
    }
}

void matrizProd(double **matriz1, double **matriz2, int n1, int n2, double **destino) {
    double resultado[n1][n2];
    int i, j, k;
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            resultado[i][j] = 0;
        }
    }

    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            for (k = 0; k < n2; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    copiarMatriz(resultado, destino, n1, n2);
}

int main() {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);

    double matriz[n][n];
    double resultado[n][n];
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            resultado[i][j] = 0;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    matrizProd(matriz, matriz, n, n, resultado);
    for (i = 1; i < k; i++) {
        matrizProd(resultado, matriz, n, n, resultado);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%.2lf", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}