#include <stdio.h>
#include <string.h>

int main() {
    int quantidade;
    scanf("%d", &quantidade);

    char str1[50];
    char str2[50];
    char resultado[100];
    int i, j, k = 0;
    while (quantidade--) {
        scanf("%s", str1);
        scanf("%s", str2);

        for (i = 0, j = 0; i < strlen(str1) && j < strlen(str2); ) {
            resultado[k++] = str1[i++];
            resultado[k++] = str2[j++];
        }

        while (i < strlen(str1)) {
            resultado[k++] = str1[i++];
        }
        while (j < strlen(str2)) {
            resultado[k++] = str2[j++];
        }
        resultado[k] = '\0';
        
        printf("%s\n", resultado);
    }
    
    return 0;
}