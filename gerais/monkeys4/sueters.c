#include <stdio.h>

int main() {
    int qt;
    scanf("%d", &qt);

    int sueters[qt];
    int linhas[qt];
    int menor;
    for (int i = 0; i < qt; i++) {
        scanf("%d", &sueters[i]);
    }
    scanf("%d", &linhas[0]);
    menor = linhas[0] / sueters[0];
    for (int i = 1; i < qt; i++) {
        scanf("%d", &linhas[i]);
        if (linhas[i] / sueters[i] < menor) {
            menor = linhas[i] / sueters[i];
        }
    }

    printf("%d\n", menor);
    
    return 0;
}