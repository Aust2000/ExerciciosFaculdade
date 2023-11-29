#include <stdio.h>
#include <string.h>

int operacoes(char *str1, char *str2) {
    int i;
    int resultado = 0;
    for (i = 0; i < strlen(str1); i++) {
        resultado += (str2[i] - str1[i]);
        if (str2[i] < str1[i]) {
            resultado += 26;
        }
    }

    return resultado;
}

int main() {
    int quantidade;
    scanf("%d", &quantidade);

    char str1[10000];
    char str2[10000];
    while (quantidade > 0) {
        scanf("%s", str1);
        scanf("%s", str2);

        printf("%d\n", operacoes(str1, str2));

        quantidade--;
    }
    
    return 0;
}