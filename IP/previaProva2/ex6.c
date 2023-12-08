#include <stdio.h>

int main() {
    int quantidade;
    scanf("%d", &quantidade);

    int vet[quantidade];
    scanf("%d", &vet[0]);
    int menor = vet[0];
    int menorIndex = 0;
    for (int i = 1; i < quantidade; i++) {
        scanf("%d", &vet[i]);
        if (vet[i] < menor) {
            menor = vet[i];
            menorIndex = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", menorIndex);    
    
    return 0;
}