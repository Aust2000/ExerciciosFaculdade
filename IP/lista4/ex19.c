#include <stdio.h>
#include <string.h>

void matrixQuadr(int **matriz, int n, double **destino) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                destino[i][j] += matriz[i][k] * matriz[k][j];
            }
        }
    }
}

int main() {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);

    int matriz[n][n];
    double resultado[n][n];
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            resultado[i][j] = 0;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < k; i++) {
        matrixQuadr(matriz, n, resultado);
    }

    return 0;
}