#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int qtMontanhas;
    cin >> qtMontanhas;

    int tmMaiorMontanha = 0, tmSegundaMontanha = 0;
    string nomeMaior, nomeSegunda;

    int tmAtual;
    string nomeAtual;
    for (int i = 0; i < qtMontanhas; i++) {
        cin >> nomeAtual;
        cin >> tmAtual;

        if (tmAtual > tmMaiorMontanha) {
            tmSegundaMontanha = tmMaiorMontanha;
            nomeSegunda = nomeMaior;

            tmMaiorMontanha = tmAtual;
            nomeMaior = nomeAtual;
        } else if (tmAtual > tmSegundaMontanha) {
            tmSegundaMontanha = tmAtual;
            nomeSegunda = nomeAtual;
        }
    }

    cout << nomeSegunda;
    
    return 0;
}