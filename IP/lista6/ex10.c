#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printTodosPrefixos(char *string, int tamanhoString) {
    if (tamanhoString == 0) {
        return;
    }
    int i;
    for (i = 0; i < tamanhoString; i++) {
        printf("%c", string[i]);
    }
    printf("\n");
    return printTodosPrefixos(string, tamanhoString - 1);
}

int main() {
    int quantidadeInputs;
    scanf("%d%*c", &quantidadeInputs);

    char string[100];
    int tamanhoString;
    int i;
    for (i = 0; i < quantidadeInputs; i++) {
        scanf("%[^\n]%*c", string);
        tamanhoString = strlen(string);

        printf("Caso de teste %d\n", i + 1);
        printTodosPrefixos(string, tamanhoString);
    }

    return 0;
}