#include <stdio.h>
#include <stdlib.h>

int temElemento10xAnterior(int *vetor, int tamanhoVetor) {
    if (tamanhoVetor == 0) {
        return 0;
    } else if (vetor[0] * 10 == vetor[1]) {
        return 1;
    } else {
        return temElemento10xAnterior(vetor + 1, tamanhoVetor - 1);
    }
}

int *vetorAlocado(int tamanho) {
    int *ponteiro = NULL;
    do {
        ponteiro = (int*)malloc(sizeof(int) * tamanho);
    } while (ponteiro == NULL);
    return ponteiro;
}

int main() {
    int quantidadeInputs;
    scanf("%d", &quantidadeInputs);

    int *vetorNums;
    int tamanhoVetor;
    while (quantidadeInputs--) {
        scanf("%d", &tamanhoVetor);
        vetorNums = vetorAlocado(tamanhoVetor);

        int i;
        for (i = 0; i < tamanhoVetor; i++) {
            scanf("%d", &vetorNums[i]);
        }
        
        if (temElemento10xAnterior(vetorNums, tamanhoVetor) == 1) {
            printf("VERDADEIRO\n");
        } else {
            printf("FALSO\n");
        }
        free(vetorNums);
    }

    return 0;
}