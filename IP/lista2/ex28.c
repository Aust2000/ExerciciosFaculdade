#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int max(int a, int b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}

int uniao(int *vetor1, int *vetor2, int tam1, int tam2, int *resultado) {
    int i, j, repeated;
    int k = 0;
    for (i = 0; i < tam1; i++) {
        resultado[k++] = vetor1[i];
    }

    for (i = 0; i < tam2; i++) {
        repeated = 0;
        for (j = 0; j < tam1; j++) {
            if (vetor2[i] == vetor1[j]) {
                repeated = 1;
                break;
            }
        }
        if (repeated == 0) {
            resultado[k++] = vetor2[i];
        }
    }

    return k;
}

int intersecao(int *vetor1, int *vetor2, int tam1, int tam2, int *resultado) {    
    int i, j;
    int k = 0;
    for (i = 0; i < tam1; i++) {
        for (j = 0; j < tam2; j++) {
            if (vetor1[i] == vetor2[j]) {
                resultado[k++] = vetor1[i];
            }
        }
    }

    return k;
}

void printVet(int *vetor, int tam) {
    printf ("(");
    int i;
    for (i = 0; i < tam; i++) {
        printf("%d", vetor[i]);
        if (i != tam - 1) {
            printf(",");
        }
    }
    printf(")\n");
}

//lerVet: lê o vetor já eliminando valores repetidos
void lerVet(int tam, int *vet) {
    int i, j;
    for (i = 0; i < tam; i++) {
        scanf("%d", &vet[i]);
        
        for (j = 0; j < i; j++) {
            if (vet[i] == vet[j]) {
                i--;
            }
        }
    }
}

//lerTam: lê o tamanho até que seja colocado um valor válido e coloca no endereço do parâmetro
void lerTam(int *tam) {
    do {
        scanf("%d", tam);
    } while (*tam < 1 || *tam > 100);
}

int main() {
    int tamUni, tamInter;
    // recebe o tamanho dos vetores
    int tam1 = 0;
    int tam2 = 0;
    lerTam(&tam1);
    lerTam(&tam2);

    // recebe os vetores, ignorando números repetidos seguidos
    int vetor1[tam1], vetor2[tam2];
    lerVet(tam1, vetor1);
    lerVet(tam2, vetor2);

    // pega a união e a intersessão dos vetores
    int vetInter[max(tam1, tam2)];
    tamInter = intersecao(vetor1, vetor2, tam1, tam2, vetInter);
    int vetUni[tam1 + tam2 - tamInter];
    tamUni = uniao(vetor1, vetor2, tam1, tam2, vetUni);

    printVet(vetUni, tamUni);
    printVet(vetInter, tamInter);

    return 0;
}