#include <bits/stdc++.h>
using namespace std;

int main() {
    int quantidadeVetores;
    cin >> quantidadeVetores;

    set<vector<int>> conjuntoVetores;
    int tamanhoVetorAtual;
    for (int i = 0; i < quantidadeVetores; i++) {
        cin >> tamanhoVetorAtual;
        vector<int> vetorAtual(tamanhoVetorAtual);
        for (int j = 0; j < tamanhoVetorAtual; j++) {
            cin >> vetorAtual[j];
        }

        conjuntoVetores.insert(vetorAtual);
    }

    cout << conjuntoVetores.size() << "\n";
    
    return 0;
}