#include <stdio.h>

int main() {
    double v, vi, vf;
    scanf("%lf\n%lf\n%lf", &v, &vi, &vf);

    if (vi >= vf) {
        printf("INTERVALO INVALIDO");
        return 0;
    }

    int I, bestI;
    double L, besti;
    double bestL = 0;
    double i = vi;
    for (; i <= vf; i++) {
        if (i == v) {
            I = 120;
        }
        else if (i > v) {
            I = 120 - (60 * (i - v));
        }
        else {
            I = 120 + (50 * (v - i));
        }

        L = ((i - 0.05) * I) - 200;

        if (L > bestL) {
            bestL = L;
            bestI = I;
            besti = i;
        }
        
        printf("V: %.2lf, N: %d, L: %.2lf\n", i, I, L);
    }

    printf("Melhor valor final: %.2lf\nLucro: %.2lf\nNumero de ingressos: %d", besti, bestL, bestI);
    
    return 0;
}