#include <bits/stdc++.h>
using namespace std;

long long int somaAteIndex(int index, vector<long long int> &vetorArvoreFenwick) {
    long long soma = 0;
    while(index) {
        soma += vetorArvoreFenwick[index];
        index -= (index & -index);
    }
    return soma;
}

void adicionarNaArvoreFenwick(int posicao, long long int valor, vector<long long int> &vetor, vector<long long int> &vetorArvoreFenwick) {
    while (posicao < vetor.size()) {
        vetorArvoreFenwick[posicao] += valor;
        posicao += (posicao & -posicao);
    }
}

int main() {
    int tamanhoVetor, quantidadePerguntas;
    cin >> tamanhoVetor >> quantidadePerguntas;

    vector<long long int> vetor(tamanhoVetor + 10), vetorArvoreFenwick(tamanhoVetor + 10, 0);

    for (int i = 0; i < tamanhoVetor; i++) {
        cin >> vetor[i + 1];
        adicionarNaArvoreFenwick(i + 1, vetor[i + 1], vetor, vetorArvoreFenwick);
    }
    
    int operacao, param1, param2;
    while (quantidadePerguntas--) {
        cin >> operacao >> param1 >> param2;
        if (operacao == 0) {
            vetor[param1 + 1] += param2 + 1;
            adicionarNaArvoreFenwick(param1 + 1, param2, vetor, vetorArvoreFenwick);
        } else if (operacao == 1) {
            cout << somaAteIndex(param2, vetorArvoreFenwick) - somaAteIndex(param1, vetorArvoreFenwick) << "\n";
        }
    }
    return 0;
}