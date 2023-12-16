#include <stdio.h>

int main() {
    int qt, peso;
    scanf("%d %d", &qt, &peso);

    long int soma = 0;
    int forcas[qt];
    for (int i = 0; i < qt; i++) {
        scanf("%d", &forcas[i]);
        soma += forcas[i];
    }

    for (int i = 0; i < qt; i++) {
        if (soma - forcas[i] >= peso || forcas[i] >= peso) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }
    
    return 0;
}