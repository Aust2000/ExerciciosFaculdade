#include <bits/stdc++.h>
using namespace std;

int buscaBinaria(vector<long long int> &vetor, int objetivo) {
    int min = 0, max = vetor.size() - 1;
    int ponteiro, ultimoTentado;
    
    while(min <= max) {
        ponteiro = floor((min + max) / 2);
        if (vetor[ponteiro] == objetivo) {
            return ponteiro;
        }
        else if (vetor[ponteiro] < objetivo) {
            min = ponteiro + 1;
        } else {
            max = ponteiro - 1;
        }

        ultimoTentado = vetor[ponteiro];
    }

    if (ultimoTentado > objetivo) {
        return ponteiro;
    } else if (ultimoTentado < objetivo && ponteiro + 1 < vetor.size()) {
        return ponteiro + 1;
    }

    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int qtAlunos, qtValores;
    cin >> qtAlunos >> qtValores;

    vector<long long int> alturas(qtAlunos);

    for (int i = 0; i < qtAlunos; i++) {
        cin >> alturas[i];
    }
    sort(alturas.begin(), alturas.end());

    int valorAtual, posicaoMenor;
    for (int i = 0; i < qtValores; i++) {
        cin >> valorAtual;

        posicaoMenor = buscaBinaria(alturas, valorAtual);
        if (posicaoMenor == -1) {
            cout << 0 << "\n";
        } else {
            cout << qtAlunos - posicaoMenor << "\n";
        }
    }
    
    return 0;
}