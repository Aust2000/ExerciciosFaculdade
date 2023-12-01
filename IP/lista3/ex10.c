#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int quantidade;
    scanf("%d\n", &quantidade);

    char str[10000];
    while (quantidade--)
    {
        fgets(str, 10000, stdin);

        int i;
        int tamanho = strlen(str) - 1;
        char temp;
        for (i = 0; i < tamanho; i++) {
            if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) {
                str[i] += 3;
            }
        }

        for (i = 0; i < ceil(tamanho / 2); i++) {
            temp = str[i];
            str[i] = str[tamanho - 1 - i];
            str[tamanho - 1 - i] = temp;
        }

        for (i = floor(tamanho / 2); i < tamanho; i++) {
            str[i] -= 1;
        }

        printf("%s", str);
    }
    
    
    return 0;
}