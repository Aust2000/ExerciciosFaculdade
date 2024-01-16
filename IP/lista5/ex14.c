#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double parteReal;
    double parteImaginaria;
} NumComplex;

typedef struct {
    NumComplex raiz1;
    NumComplex raiz2;
} Raizes;

typedef struct {
    float a;
    float b;
    float c;
} EquacaoQuadratica;

Raizes bhaskara(EquacaoQuadratica equacao) {
    Raizes raizes;
    double delta = pow(equacao.b,2) - 4 * equacao.a * equacao.c;
    if (delta >= 0) {
        raizes.raiz1.parteReal = (-equacao.b + sqrt(delta)) / (2 * equacao.a);
        raizes.raiz1.parteImaginaria = raizes.raiz2.parteImaginaria = 0.0;
        raizes.raiz2.parteReal = (-equacao.b - sqrt(delta)) / (2 * equacao.a);
    } else {
        raizes.raiz1.parteReal = raizes.raiz2.parteReal = -equacao.b / (2 * equacao.a);
        raizes.raiz1.parteImaginaria = sqrt(fabs(-delta)) / (2 * equacao.a);
        raizes.raiz2.parteImaginaria = -sqrt(fabs(-delta)) / (2 * equacao.a);
    }

    return raizes;
}

void printNumComplex(NumComplex num) {
    if (num.parteReal != 0.0) {
        printf("%.2lf", num.parteReal);
        if (num.parteImaginaria == 1.0) {
            printf("+");
        }
    }
    if (num.parteImaginaria == 1.0) {
        printf("i");
    } else if (num.parteImaginaria == -1.0) {
        printf("-i");
    } else if (num.parteImaginaria != 0.0) {
        printf("%.2lfi", num.parteImaginaria);
    }

    if (num.parteReal == 0 && num.parteImaginaria == 0) {
        printf("0.00");
    }
}

int main() {
    EquacaoQuadratica equacao;
    scanf("%f %f %f", &equacao.a, &equacao.b, &equacao.c);

    Raizes raizesEquacao;
    raizesEquacao = bhaskara(equacao);
    printf ("x1 = ");
    printNumComplex(raizesEquacao.raiz1);
    printf("\n");
    printf ("x2 = ");
    printNumComplex(raizesEquacao.raiz2);
    printf("\n");

    return 0;
}