#include <stdio.h>

int checkLinha(int linha, int matriz[][9]) {
    int numeros[9];
    int i, resultado = 1;
    for (i = 0; i < 9; i++) {
        numeros[i] = 0;
    }

    for (i = 0; i < 9; i++) {
        numeros[matriz[linha][i] - 1]++;
        if (numeros[matriz[linha][i] - 1] > 1) {
            resultado = 0;
            break;
        }
    }

    return resultado;
}

int checkColuna(int coluna, int matriz[][9]) {
    int numeros[9];
    int i, resultado = 1;
    for (i = 0; i < 9; i++) {
        numeros[i] = 0;
    }

    for (i = 0; i < 9; i++) {
        numeros[matriz[i][coluna] - 1]++;
        if (numeros[matriz[i][coluna] - 1] > 1) {
            resultado = 0;
            break;
        }
    }

    return resultado;
}

int checkQuadrado(int linha, int coluna, int matriz[][9]) {
    int numeros[9];
    int i, j, resultado = 1;
    for (i = 0; i < 9; i++) {
        numeros[i] = 0;
    }

    for (i = linha; i < linha + 3; i++) {
        for (j = coluna; j < coluna + 3; j++) {
            numeros[matriz[i][j] - 1]++;
            if (numeros[matriz[i][j] - 1] > 1) {
                resultado = 0;
                break;
            }
        }
        if (resultado == 0) {
            break;
        }
    }

    return resultado;
}

int main() {
    int sudoku[9][9];
    int i, j;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            scanf("%d", &sudoku[i][j]);
        }
    }

    int resulado = 1;

    for (i = 0; i < 9; i++) {
        if (checkLinha(i, sudoku) == 0) {
            resulado = 0;
            break;
        }
    }

    for (i = 0; i < 9; i++) {
        if (checkColuna(i, sudoku) == 0) {
            resulado = 0;
            break;
        }
    }

    for (i = 0; i < 9; i += 3) {
        for (j = 0; j < 9; j += 3) {
            if (checkQuadrado(i, j, sudoku) == 0) {
                resulado = 0;
                break;
            }
        }
    }

    if (resulado == 1) {
        printf("valido");
    } else {
        printf("invalido");
    }
    
    return 0;
}