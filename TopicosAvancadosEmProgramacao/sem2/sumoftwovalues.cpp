#include <bits/stdc++.h>
using namespace std;

int main() {
    int tmVetor, soma;
    cin >> tmVetor >> soma;
    
    vector<pair<int, int>> vetor(tmVetor);

    for (int i = 0; i < tmVetor; i++) {
        cin >> vetor[i].first;
        vetor[i].second = i;
    }

    sort(vetor.begin(), vetor.end());

    int esquerda = 0, direita = tmVetor - 1;
    while (vetor[esquerda].first + vetor[direita].first != soma && direita != esquerda) {
        if (vetor[esquerda].first + vetor[direita].first > soma) {
            direita--;
        } else {
            esquerda++;
        }
    }

    if (esquerda == direita) {
        cout << "IMPOSSIBLE";
    } else if (vetor[esquerda].second < vetor[direita].second) {
        cout << vetor[esquerda].second + 1 << " " << vetor[direita].second + 1 << "\n";
    } else {
        cout << vetor[direita].second + 1 << " " << vetor[esquerda].second + 1 << "\n";
    }
    
    return 0;
}