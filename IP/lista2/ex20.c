#include <stdio.h>

void lerPonto (double *vet) {
    int i;
    for (i = 0; i < 3; i++) {
            scanf("%lf", &vet[i]);
        }
}

int maiorVet(double *ponto2, double *ponto1) {
    double vetx, vety, vetz;
    vetx = ponto2[0] - ponto1[0];
    if (vetx < 0) {
        vetx *= -1;
    }
    vety = ponto2[1] - ponto1[1];
    if (vety < 0) {
        vety *= -1;
    }
    vetz = ponto2[2] - ponto1[2];
    if (vetz < 0) {
        vetz *= -1;
    }
    if (vetx > vety && vetx > vetz) {
        return vetx;
    } else if (vety > vetx && vety > vetz) {
        return vety;
    } else {
        return vetz;
    }
}

int main() {
    int quantidade;
    scanf("%d", &quantidade);

    double pontos[quantidade][3];
    lerPonto(pontos[0]);
    int i;
    double vet;
    for (i = 1; i < quantidade; i++) {
        lerPonto(pontos[i]);
        vet = maiorVet(pontos[i - 1], pontos[i]);
        printf("%.2lf\n", vet);
    }
    
    return 0;
}