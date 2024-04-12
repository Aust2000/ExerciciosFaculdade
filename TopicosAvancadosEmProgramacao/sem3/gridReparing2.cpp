#include <bits/stdc++.h>
using namespace std;

bool squareExitst(int i, int j, int n, int m) {
    if (i < 0 || i > n - 1 || j < 0 || j > m - 1) {
        return false;
    }
    return true;
}

bool haveBlackPartner(vector <vector <char>> &matriz, int i, int j, int n, int m) {
    if (squareExitst(i, j - 1, n, m) && matriz[i][j - 1] == '#') {
        return true;
    } else if (squareExitst(i, j + 1, n, m) && matriz[i][j + 1] == '#') {
        return true;
    } else if (squareExitst(i - 1, j, n, m) && matriz[i - 1][j] == '#') {
        return true;
    } else if (squareExitst(i + 1, j, n, m) && matriz[i + 1][j] == '#') {
        return true;
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector <vector <char>> matriz(n, vector <char> (m));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matriz[i][j];
        }
    }

    bool resultado = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] == '#' && !haveBlackPartner(matriz, i, j, n, m)) {
                resultado = false;
                break;
            }
        }
    }

    if (resultado) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}