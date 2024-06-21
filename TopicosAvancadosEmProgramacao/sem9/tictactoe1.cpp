#include <bits/stdc++.h>
using namespace std;

int main() {
    int qtTeste;
    int quantidadeX, quantidadeO, vitoriasX, vitoriasO;

    vector<string> matriz(3);

    cin >> qtTeste;    
    while (qtTeste--) {
        quantidadeX = 0;
        quantidadeO = 0;
        vitoriasX = 0;
        vitoriasO = 0;

        for (int i = 0; i < 3; i++) {
            cin >> matriz[i];
            for (int j = 0; j < 3; j++) {
                if (matriz[i][j] == 'X') {
                    quantidadeX++;
                } else if (matriz[i][j] == 'O') {
                    quantidadeO++;
                }
            }
        }

        if (quantidadeO != quantidadeX && quantidadeO != quantidadeX - 1) {
            cout << "no\n";
            continue;
        }

        // ler linhas
        for (int i = 0; i < 3; i++) {
            if (matriz[i][0] == matriz[i][1] && matriz[i][1] == matriz[i][2]) {
                if (matriz[i][0] == 'X') {
                    vitoriasX++;
                } else if (matriz[i][0] == 'O') {
                    vitoriasO++;
                }
            }
        }

        //ler colunas
        for (int i = 0; i < 3; i++) {
            if (matriz[0][i] == matriz[1][i] && matriz[1][i] == matriz[2][i]) {
                if (matriz[0][i] == 'X') {
                    vitoriasX++;
                } else if (matriz[0][i] == 'O') {
                    vitoriasO++;
                }
            }
        }

        // ler diagonais
        if (matriz[0][0] == matriz[1][1] && matriz[1][1] == matriz[2][2]) {
            if (matriz[1][1] == 'X') {
                vitoriasX++;
            } else if (matriz[1][1] == 'O') {
                vitoriasO++;
            }
        } else if (matriz[0][2] == matriz[1][1] && matriz[1][1] == matriz[2][0]) {
            if (matriz[1][1] == 'X') {
                vitoriasX++;
            } else if (matriz[1][1] == 'O') {
                vitoriasO++;
            }
        }


        if (vitoriasX == vitoriasO && vitoriasO == 1) {
            cout << "no\n";
            continue;
        } else if ((vitoriasX == 1 && quantidadeO == quantidadeX) || (vitoriasO == 1 && quantidadeO == quantidadeX - 1)) {
            cout << "no\n";
            continue;
        }

        cout << "yes\n";
    }
    


    return 0;
}