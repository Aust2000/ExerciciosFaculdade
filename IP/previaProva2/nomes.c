#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void inverter(char *nome) {
    int i;
    int tam = strlen(nome);
    char temp;
    for (i = 0; i < ceil(tam / 2); i++) {
        temp = nome[i];
        nome[i] = nome[tam - 1 - i];
        nome[tam - 1 - i] = temp;
    }
}

void ordenar(char **nome, int qt) {
    int j;
    char palavraChave[qt];

    int i, k = 0;
    for (i = 1; i < qt; i++) {
        strcpy(palavraChave, nome[i]);

        j = i - 1;
        while (j >= 0 && tolower(nome[j][k]) >= tolower(nome[i][k])) {
            while (tolower(nome[j][k]) == tolower(nome[i][k])) {
                k++;
                continue;
            }
            
            strcpy(nome[j + 1], nome[j]);
            j--;
            k = 0;
        }

        strcpy(nome[j + 1], palavraChave);
    }
}

int main() {
    int qt, tam;
    scanf("%d %d", &qt, &tam);
    
    char nomes[qt][tam];

    int i;
    for (i = 0; i < qt; i++) {
        scanf(" %s", &(nomes[i]));
        inverter(nomes[i]);
    }

    ordenar(nomes, qt);

    for (i = 0; i < qt; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}