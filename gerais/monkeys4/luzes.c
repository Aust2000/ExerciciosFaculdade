#include <stdio.h>
#include <string.h>

int main() {
    char str[1000000];
    scanf("%s", str);

    int tamanho = strlen(str);
    strcpy(str, "VA");
    char anterior[1000000] = "V";
    char temp[1000000];
    while (strlen(str) < tamanho) {
        strcpy(temp, str);
        strcat(str, anterior);
        strcpy(anterior, temp);
    }

    printf("%s\n", str);
    
    return 0;
}