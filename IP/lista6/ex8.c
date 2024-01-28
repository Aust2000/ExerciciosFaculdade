#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ePalindromo(char *string, int tamanhoString) {
    if (tamanhoString <= 0) {
        return 1;
    } else if (string[0] == string[tamanhoString - 1]) {
        return ePalindromo(string + 1, tamanhoString - 2);
    } else {
        return 0;
    }
}

char *stringAlocada(int tamanho) {
    char *ponteiro = NULL;
    do {
        ponteiro = (char*)malloc(sizeof(char) * tamanho);
    } while (ponteiro == NULL);
    return ponteiro;
}

int main() {
    int quantidadeInputs;
    scanf("%d", &quantidadeInputs);

    char *string;
    int tamanhoString;
    while (quantidadeInputs--) {
        scanf("%d%*c", &tamanhoString);
        tamanhoString += tamanhoString - 1;

        string = stringAlocada(tamanhoString);
        scanf("%[^\n]%*c", string);

        if (ePalindromo(string, tamanhoString) == 1) {
            printf("PALINDROMO\n");
        } else {
            printf("NAO PALINDROMO\n");
        }

        free(string);
    }

    return 0;
}