#include <bits/stdc++.h>
using namespace std;

int main() {
    int tamanho;
    cin >> tamanho;

    set<int> conjunto;
    int valorAtual;
    for (int i = 0; i < tamanho; i++) {
        cin >> valorAtual;
        conjunto.insert(valorAtual);
    }

    for (int i = 0; ;i++) {
        if (conjunto.find(i) == conjunto.end()) {
            cout << i << "\n";
            break;
        }
    }
    
    return 0;
}