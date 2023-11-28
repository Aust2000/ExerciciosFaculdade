#include <stdio.h>

void dancar(char *frase) {
    int i;
    int controle = 0;
    for (i = 0; i < 50; i++) {
        if (frase[i] == '\0') {
            break;
        } else if (frase[i] >= 65 && frase[i] <= 90) {
            if (controle == 0) {
                controle = 1;
            } else {
                frase[i] += 32;
                controle = 0;
            }
        } else if (frase[i] >= 97 && frase[i] <= 122) {
            if (controle == 1) {
                controle = 0;
            } else {
                frase[i] -= 32;
                controle = 1;
            }
        }
    }
}

int main() {
    char frase[50];
    char * ptr;
    while (fgets(frase, sizeof(frase), stdin) != NULL)
    {
        dancar(frase);
        printf("%s", frase);
    }
    
    
    return 0;
}