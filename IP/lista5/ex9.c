#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double variavelU;
    double posicaoX;
    double posicaoY;
    double posicaoZ;
} Ponto;

double calcularDistancia(Ponto ponto1, Ponto ponto2) {
    return sqrt(pow(ponto1.variavelU - ponto2.variavelU, 2) + pow(ponto1.posicaoX - ponto2.posicaoX, 2) + pow(ponto1.posicaoY - ponto2.posicaoY, 2) + pow(ponto1.posicaoZ - ponto2.posicaoZ, 2));
}

int main() {
    int quantidadePontos;
    scanf("%d", &quantidadePontos);

    Ponto arrayPontos[quantidadePontos];

    int i;
    Ponto pontoEscaneado;
    for (i = 0; i < quantidadePontos; i++) {
        scanf("%lf %lf %lf %lf", &arrayPontos[i].variavelU, &arrayPontos[i].posicaoX, &arrayPontos[i].posicaoY, &arrayPontos[i].posicaoZ);
    }

    for (i = 1; i < quantidadePontos; i++) {
        printf("%.2lf\n", calcularDistancia(arrayPontos[i - 1], arrayPontos[i]));
    }

    return 0;
}