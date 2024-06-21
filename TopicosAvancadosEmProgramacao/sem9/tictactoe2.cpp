#include <bits/stdc++.h>
using namespace std;

int main() {
    int quantidadeX, quantidadeO, vitoriasX, vitoriasO;

    vector<string> matriz(3);

    quantidadeX = 0;
    quantidadeO = 0;
    vitoriasX = 0;
    vitoriasO = 0;

    for (int i = 0; i < 3; i++) {
        cin >> matriz[i];
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == 'X') {
                quantidadeX++;
            } else if (matriz[i][j] == '0') {
                quantidadeO++;
            }
        }
    }

    if (quantidadeO != quantidadeX && quantidadeO != quantidadeX - 1) {
        cout << "illegal\n";
        return 0;
    }

    // ler linhas
    for (int i = 0; i < 3; i++) {
        if (matriz[i][0] == matriz[i][1] && matriz[i][1] == matriz[i][2]) {
            if (matriz[i][0] == 'X') {
                vitoriasX++;
            } else if (matriz[i][0] == '0') {
                vitoriasO++;
            }
        }
    }

    //ler colunas
    for (int i = 0; i < 3; i++) {
        if (matriz[0][i] == matriz[1][i] && matriz[1][i] == matriz[2][i]) {
            if (matriz[0][i] == 'X') {
                vitoriasX++;
            } else if (matriz[0][i] == '0') {
                vitoriasO++;
            }
        }
    }

    // ler diagonais
    if (matriz[0][0] == matriz[1][1] && matriz[1][1] == matriz[2][2]) {
        if (matriz[1][1] == 'X') {
            vitoriasX++;
        } else if (matriz[1][1] == '0') {
            vitoriasO++;
        }
    } else if (matriz[0][2] == matriz[1][1] && matriz[1][1] == matriz[2][0]) {
        if (matriz[1][1] == 'X') {
            vitoriasX++;
        } else if (matriz[1][1] == '0') {
            vitoriasO++;
        }
    }

    if (vitoriasX == vitoriasO && vitoriasO == 1) {
        cout << "illegal\n";
        return 0;
    } else if ((vitoriasX == 1 && quantidadeO == quantidadeX) || (vitoriasO == 1 && quantidadeO == quantidadeX - 1)) {
        cout << "illegal\n";
        return 0;
    }

    if (vitoriasX == 1 || vitoriasX == 2) {
        cout << "the first player won\n";
    } else if (vitoriasO == 1) {
        cout << "the second player won\n";
    } else if (vitoriasX == 0 && vitoriasO == 0) {
        if (quantidadeO + quantidadeX == 9) {
            cout << "draw\n";
        } else if (quantidadeO == quantidadeX) {
            cout << "first\n";
        } else {
            cout << "second\n";
        }
    }
    
    return 0;
}