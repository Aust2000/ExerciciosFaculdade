#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contAliteracoes(char *frase) {
    int aliteracoes = 0;
    int controle = 0;
    char letra = tolower(frase[0]);

    int i;
    for (i = 1; i < strlen(frase); i++) {
        if (frase[i] == ' ' && tolower(frase[i + 1]) == letra && controle == 0) {
            aliteracoes++;
            controle = 1;
        } else if (frase[i] == ' ' && tolower(frase[i + 1]) != letra) {
            controle = 0;
            letra = tolower(frase[i + 1]);
        }
    }

    return aliteracoes;
}

int main() {
    char frase[100];
    
    while (fgets(frase, 100, stdin) != NULL) {
        printf("%d\n", contAliteracoes(frase));
    }
    

    return 0;
}