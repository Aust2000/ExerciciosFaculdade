#include <stdio.h>
#include <string.h>

void str_clean(char *str, char *clr) {
    char result[256];

    int i, j;
    int eErrado = 0;
    int k = 0;
    for (i = 0; i < 256; i++) {
        if (str[i] == '\0') {
            break;
        }

        for (j = 0; j < 256; j++) {
            if (clr[j] == '\0') {
                break;
            } else if (str[i] == clr[j]) {
                eErrado = 1;
            }
        }

        if (eErrado == 1) {
            eErrado = 0;    
            continue;
        } else {
            result[k++] = str[i];
        }

    }

    strcpy(str, result);
}

int main() {
    char str[256];
    char clr[256];
    scanf("%[^\n]", str);
    scanf("\n%[^\n]", clr);
    str_clean(str, clr) ;
    printf("%s\n", str);
    return 0;
}