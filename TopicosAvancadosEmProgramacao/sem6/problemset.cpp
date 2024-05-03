#include <bits/stdc++.h>
using namespace std;

int main() {
    int quantidadeCandidatos;
    cin >> quantidadeCandidatos;

    map<int, int> candidatos;
    int candidatoAtual;
    for (int i = 0; i < quantidadeCandidatos; i++) {
        cin >> candidatoAtual;
        if (candidatos.find(candidatoAtual) != candidatos.end()) {
            candidatos[candidatoAtual]++;
        } else {
            candidatos[candidatoAtual] = 1;
        }
    }

    int quantidadeProblemasNaProva;
    cin >> quantidadeProblemasNaProva;
    int problemaAtual;
    for (int i = 0; i < quantidadeProblemasNaProva; i++) {
        cin >> problemaAtual;
        if (candidatos.find(problemaAtual) != candidatos.end() && candidatos[problemaAtual] != 0) {
            candidatos[problemaAtual]--;
        } else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    
    return 0;
}