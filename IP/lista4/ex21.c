#include <stdio.h>

int distancias(int saida, int destino) {
    int tabela[6][6] = {
        {0, 63, 210, 190, -1, 190},
        {63, 0, 160, 150, 95, 10},
        {210, 160, 0, 10, 1, 10},
        {190, 150, 10, 0, 10, 20},
        {10, 95, 7, 21, 0, 80},
        {190, 2, -1, 41, 80, 0}
    };

    return tabela[saida][destino];
}

int main() {
    int tam;
    scanf("%d", &tam);
    
    int rota[tam];
    int i, resultado = 0, distancia;
    for (i = 0; i < tam; i++) {
        scanf("%d", &rota[i]);
    }

    for (i = 1; i < tam; i++) {
        distancia = distancias(rota[i - 1], rota[i]);        
        if (distancia == -1) {
            resultado = -1;
            break;
        } else {
            resultado += distancia;
        }
    }

    if (resultado == -1) {
        printf("rota invalida!\n");
    } else {
        printf("%d\n", resultado);
    }
    
    return 0;
}