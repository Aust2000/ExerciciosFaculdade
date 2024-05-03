#include <bits/stdc++.h>
using namespace std;

int main() {
    int tamanho;
    cin >> tamanho;
    
    set<long long int> conjunto;
    int valorAtual;
    for (int i = 0; i < tamanho; i++) {
        cin >> valorAtual;

        if (conjunto.find(valorAtual) != conjunto.end()) {
            cout << "NO" << "\n";
            return 0;
        } else {
            conjunto.insert(valorAtual);
        }
    }

    cout << "YES" << "\n";
    
    return 0;
}