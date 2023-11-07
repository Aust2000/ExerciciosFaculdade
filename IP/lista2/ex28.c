#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *uniao(int *vetor1, int *vetor2, int tam1, int tam2) {

}

int max(int a, int b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}

int * intersecao(int *vetor1, int *vetor2, int tam1, int tam2) {
    int *vet = NULL;

    int resultado = max(tam1, tam2);
    do{
        vet = (int *) malloc(resultado * sizeof(int));
    } while (vet == NULL);
    
    int k = 0;
    for (int i = 0; i < tam1; i++) {
        for (int j = 0; j < tam2; j++) {
            if (vetor1[i] == vetor2[j]) {
                vet[k] = vetor1[i];
                k++;
            }
        }
    }

    return vet;
}

//função que le os vetores
int *lerVetor (int tam) {
    int vetor[tam];
    int i;
    for (i = 0; i < tam; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] == vetor[i - 1]) {
            i--;
        }
    }

    return vetor;
}

void printVet(int *vetor, int tam) {
    printf ("(");
    int i;
    for (i = 0; i < tam; i++) {
        printf("%d", vetor[i]);
        if (i =! tam - 1) {
            printf(",");
        }
    }
    printf(")\n");
}



int main() {
    // recebe o tamanho dos vetores
    int tam1, tam2;
    while (1) {
        scanf("%d", &tam1);
        if (tam1 < 1 || tam1 > 100) {
            continue;
        } else {
            break;
        }
    }
    while (1) {
        scanf("%d", &tam2);
        if (tam2 < 1 || tam2 > 100) {
            continue;
        } else {
            break;
        }
    }

    // recebe os vetores, ignorando números repetidos seguidos
    int vetor1[tam1], vetor2[tam2];
    int i;
    for (i = 0; i < tam1; i++) {
        scanf("%d", &vetor1[i]);
        if (vetor1[i] == vetor1[i - 1]) {
            i--;
        }
    }
    for (i = 0; i < tam2; i++) {
        scanf("%d", &vetor2[i]);
        if (vetor2[i] == vetor2[i - 1]) {
            i--;
        }
    }

    // pega a união e a intersessão dos vetores
    int vetorUniao[tam1 + tam2];
    int *vetorInters = NULL;
    vetorInters = intersecao(vetor1, vetor2, tam1, tam2);
    
    printVet(vetorInters, max(tam1, tam2));
    printVet(uniao, tam1 + tam2);

    free(vetorInters);

    return 0;
}