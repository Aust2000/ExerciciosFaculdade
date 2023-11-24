#include <stdio.h>
#include <string.h>
#include <math.h>

double distancia(int *vowels1, int *vowels2) {
    double resultado = 0;
    int i;
    for (i = 0; i < 5; i++) {
        resultado += pow((vowels1[i]) - (vowels2[i]), 2);
    }

    return sqrt(resultado);
}

void getVowels(char *phrase, int *vowels) {
    int i;
    for (i = 0; i < 1000; i++) {
        if (phrase[i] == 'a' || phrase[i] == 'A') {
            vowels[0]++;
        } else if (phrase[i] == 'e' || phrase[i] == 'E') {
            vowels[1]++;
        } else if (phrase[i] == 'i' || phrase[i] == 'I') {
            vowels[2]++;
        } else if (phrase[i] == 'o' || phrase[i] == 'O') {
            vowels[3]++;
        } else if (phrase[i] == 'u' || phrase[i] == 'U') {
            vowels[4]++;
        } else if (phrase[i] == '\0') {
            break;
        }
    }
}

void printVet(int *vetor, int tam) {
    printf ("(");
    int i;
    for (i = 0; i < tam; i++) {
        printf("%d", vetor[i]);
        if (i != tam - 1) {
            printf(",");
        }
    }
    printf(")\n");
}

void printString (char *string) {
    int i = 0;
    while (string[i] != '\0')
    {
        printf("%c", string[i++]);
    }
    printf("\n");
}


int main() {
    char string1[1000], string2[1000], stringao[2001];
    int ePrimeiro = 1;
    fgets(stringao, sizeof(stringao), stdin);

    int comprimento = strlen(stringao);
    if (stringao[comprimento - 1] == '\n') {
        stringao[comprimento - 1] = '\0';
    }

    int i;
    int k = 0;
    for (i = 0; i < 2001; i++) {
        if (stringao[i] == '\0') {
            break;
        } else if (stringao[i] != ';') {
            string1[k] = stringao[i];
            k++;
        } else {
            ePrimeiro = 0;
            string1[k] = '\0';
            break;
        }
    }
    i++;
    k = 0;
    for (; i < 2001; i++) {
        string2[k] = stringao[i];
        if (stringao[i] == '\0') {
            break;
        }
        else if (stringao[i] == ';') {
            ePrimeiro = 1;
            break;
        }
        k++;
    }

    if (ePrimeiro == 1) {
        printf("FORMATO INVALIDO!\n");
        return 0;
    }

    int vowels1[5], vowels2[5];
    for (i = 0; i < 5; i++) {
        vowels1[i] = 0;
    }
    for (i = 0; i < 5; i++) {
        vowels2[i] = 0;
    }

    getVowels(string1, vowels1);
    getVowels(string2, vowels2);

    printVet(vowels1, 5);
    printVet(vowels2, 5);

    printf("%.2lf\n", distancia(vowels1, vowels2));
    
    return 0;
}