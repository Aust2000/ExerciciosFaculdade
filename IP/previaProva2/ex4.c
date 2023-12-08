#include <stdio.h>

void inversao(int *memoria, int x, int y) {
    int temp;
    x--;
    y--;
    while (x < y) {
        temp = memoria[x];
        memoria[x] = memoria[y];
        memoria[y] = temp;
        x++;
        y--;
    }
}

int soma(int *memoria, int x, int y) {
    x--;
    y--;
    int resultado = 0;

    for (; x <= y; x++) {
        resultado += memoria[x];
    }

    return resultado;
}

int main() {
    int tamanho, quantidade;
    scanf("%d %d", &tamanho, &quantidade);

    int memoria[tamanho];
    for (int i = 0; i < tamanho; i++) {
        memoria[i] = i + 1;
    }

    char op;
    int x, y;
    while (quantidade--) {
        scanf(" %c %d %d", &op, &x, &y);
        if (op == 'I') {
            inversao(memoria, x, y);
        } else if (op == 'S') {
            printf("%d\n", soma(memoria, x, y));
        }
    }
    
    return 0;
}