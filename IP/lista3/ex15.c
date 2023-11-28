#include <stdio.h>
#include <string.h>

// calcularMaior: recebe um vetor de números e retorna o maior dentre os números
int calcularMaior(int *letras) {
    int maior = -1;
    int i;
    for (i = 0; i < 26; i++) {
        if (letras[i] > maior) {
            maior = letras[i];
        }
    }

    return maior;
}

void testarLetras(char *frase, int *letras) {
    int i;
    for (i = 0; i < 200; i++) {
        if (frase[i] == '\0') {
            break;
        } else if (frase[i] >= 97 && frase[i] <= 122) {
            letras[frase[i] - 97]++;
        } else if (frase[i] >= 65 && frase[i] <= 90) {
            letras[frase[i] - 65]++;
        }
    }
}

int main() {
    int quantidade;
    scanf("%d\n", &quantidade);

    int letras[26];
    char frase[200];
    int maior, i;
    while (quantidade > 0) {
        for (i = 0; i < 26; i++) {
            letras[i] = 0;
        }

        for (i = 0; i < quantidade; i++) {
            fgets(frase, sizeof(frase), stdin);
            testarLetras(frase, letras);
            maior = calcularMaior(letras);

            for (i = 0; i < 26; i++) {
                if (letras[i] == maior) {
                    printf("%c", (char)(i + 97));
                }
            }
            printf("\n");
        }

        quantidade--;
    }
    
    return 0;
}