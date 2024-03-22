#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
    int z;
} Vetor;

void lerVetorPara(Vetor *vetor) {
    scanf("%d", &(*vetor).x);
    scanf("%d", &(*vetor).y);
    scanf("%d", &(*vetor).z);
}

Vetor somaVetores(Vetor vetor1, Vetor vetor2) {
    Vetor vetorFinal;
    vetorFinal.x = vetor1.x + vetor2.x;
    vetorFinal.y = vetor1.y + vetor2.y;
    vetorFinal.z = vetor1.z + vetor2.z;
    return vetorFinal;
}

int main() {
    int qtVetores;
    scanf("%d", &qtVetores);
    
    Vetor vetorFinal;
    vetorFinal.x = 0;
    vetorFinal.y = 0;
    vetorFinal.z = 0;
    Vetor vetorTemp;

    for (int i = 0; i < qtVetores; i++) {
        lerVetorPara(&vetorTemp);
        vetorFinal = somaVetores(vetorFinal, vetorTemp);
    }

    if (vetorFinal.x == 0 && vetorFinal.y == 0 && vetorFinal.z == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}