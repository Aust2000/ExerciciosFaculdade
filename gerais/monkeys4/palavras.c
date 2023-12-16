#include <stdio.h>
#include <ctype.h>
#include <string.h>

int subpalavra(char palavra[100000], int l, int r, int letras[26]) {
    int soma = 0;
    l--;
    r--;
    for (;l <= r; l++) {
        soma += letras[palavra[l] - 96];
    }

    return soma;
}

void alterar(char palavra[100000], int i, char c, int letras[26]) {
    i--;
    palavra[i] = c;

    for (int i = 0; i < 26; i++) {
        letras[i] = 0;
    }
    int k = 1;
    for (int i = 0; i < strlen(palavra); i++) {
        if (letras[palavra[i] - 96] == 0) {
            letras[palavra[i] - 96] = k;
            k++;
        }
    }
}

int main() {
    char palavra[100000];
    int q;
    scanf("%s", palavra);
    scanf("%d", &q);

    int letras[26];
    for (int i = 0; i < 26; i++) {
        letras[i] = 0;
    }
    int k = 1;
    for (int i = 0; i < strlen(palavra); i++) {
        if (letras[palavra[i] - 96] == 0) {
            letras[palavra[i] - 96] = k;
            k++;
        }
    }

    int pr1, pr2, op;
    char pr2c;
    while (q--) {
        scanf("%d %d", &op, &pr1);

        if (op == 1) {
            scanf("%d", &pr2);
            printf("%d\n", subpalavra(palavra, pr1, pr2, letras));
        } else {
            scanf(" %c", &pr2c);
            alterar(palavra, pr1, pr2c, letras);
        }
    }
    
    return 0;
}