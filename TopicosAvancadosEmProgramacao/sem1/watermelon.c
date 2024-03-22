#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanhoMelancia;
    scanf("%d", &tamanhoMelancia);
    if (tamanhoMelancia % 2 == 0 && tamanhoMelancia > 2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}