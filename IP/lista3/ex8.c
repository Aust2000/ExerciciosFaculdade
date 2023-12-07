#include <stdio.h>
#include <string.h>

int encontrar(char caractere, char *string) {
    int i;
    for (i = 0; i < strlen(string); i++) {
        if (string[i] == caractere) {
            return i;
        }
    }
    return -1;
}

int main() {
    int quantidade;
    scanf("%d", &quantidade);

    char caractere;
    char string[500];
    int index;
    while (quantidade--) {
        scanf("%c ", &caractere);
        fgets(string, 500, stdin);

        index = encontrar(caractere, string);
        if (index == -1) {
            printf("Caractere %c nao encontrado.\n", caractere);
        } else {
            printf("Caractere %c encontrado no indice %d da string.\n", caractere, index);
        }
    }
    
    return 0;
}