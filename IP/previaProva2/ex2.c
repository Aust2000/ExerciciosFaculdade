#include <stdio.h>

int main() {
    int quantidade;
    scanf("%d", &quantidade);

    int quadrantes[501][501];
    for (int i = 0; i < 501; i++) {
        for (int j = 0; j < 501; j++) {
            quadrantes[i][j] = 0;
        }
    }

    int x, y, controle = 0;
    while (quantidade--) {
        scanf("%d %d", &x, &y);
        quadrantes[x][y]++;
        if (quadrantes[x][y] > 1) {
            controle = 1;
        }
    }

    printf("%d\n", controle);
    
    return 0;
}