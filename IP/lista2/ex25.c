#include <stdio.h>

void lerNumeros(int *aposta) {
    int i;
    for (i = 0; i < 6; i++) {
        scanf("%d", &aposta[i]);
    }
}

int testeVit(int *aposta, int *jackpot) {
    int i, j;
    int acertos = 0;
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (jackpot[i] == aposta[j]) {
                acertos++;
            }
        }
    }

    return acertos;
}

int main() {
    int jackpot[6];
    int i;
    for (i = 0; i < 6; i++) {
        scanf("%d", &jackpot[i]);
    }

    int apostadores;
    scanf("%d", &apostadores);
    int apostas[apostadores][6];
    for (i = 0; i < apostadores; i++) {
        lerNumeros(apostas[i]);
    }

    int acertos;
    int sena = 0;
    int quina = 0;
    int quadra = 0;
    for (i = 0; i < apostadores; i++) {
        acertos = testeVit(apostas[i], jackpot);

        switch (acertos)
        {
        case 6:
            sena++;
            break;
        case 5:
            quina++;
            break;
        case 4:
            quadra++;
            break;
        default:
            break;
        }
    }

    if (sena == 0) {
        printf("Nao houve acertador para sena\n");
    } else {
        printf("Houve %d acertador(es) da sena\n", sena);
    }
    if (quina == 0) {
        printf("Nao houve acertador para quina\n");
    } else {
        printf("Houve %d acertador(es) da quina\n", quina);
    }
    if (quadra == 0) {
        printf("Nao houve acertador para quadra\n");
    } else {
        printf("Houve %d acertador(es) da quadra\n", quadra);
    }

    return 0;
}