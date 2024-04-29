#include <bits/stdc++.h>
using namespace std;

long long int xorAteIndex(int index, vector<long long int> &vetorArvoreFenwick) {
    long long int exor = 0;
    while(index) {
        exor ^= vetorArvoreFenwick[index];
        index -= (index & -index);
    }
    return exor;
}

void adicionarNaArvoreFenwick(int posicao, long long int valor, vector<long long int> &vetor, vector<long long int> &vetorArvoreFenwick) {
    while (posicao < vetor.size()) {
        vetorArvoreFenwick[posicao] ^= valor;
        posicao += (posicao & -posicao);
    }
}

int main() {
    int tamanhoVetor, quantidadePerguntas;
    cin >> tamanhoVetor >> quantidadePerguntas;

    vector<long long int> vetor(tamanhoVetor + 10), vetorArvoreFenwick(tamanhoVetor + 10, 0);

    for (int i = 1; i <= tamanhoVetor; i++) {
        cin >> vetor[i];
        adicionarNaArvoreFenwick(i, vetor[i], vetor, vetorArvoreFenwick);
    }
    
    int operacao, param1, param2;
    while (quantidadePerguntas--) {
        cin >> operacao >> param1 >> param2;
        if (operacao == 1) {
            vetor[param1] ^= param2;
            adicionarNaArvoreFenwick(param1, param2, vetor, vetorArvoreFenwick);
        } else {
            cout << (xorAteIndex(param2, vetorArvoreFenwick) ^ xorAteIndex(param1 - 1, vetorArvoreFenwick)) << "\n";
        }
    }
    return 0;
}