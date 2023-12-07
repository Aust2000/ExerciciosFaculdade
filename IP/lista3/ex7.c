#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char*concat(int n, char *s) {
    char *catStr;
    do{
        catStr = (char*) malloc(n * sizeof(char));
    } while (catStr == NULL);

    s[n] = '\0';
    strcpy(catStr, s);
    return catStr;
}

int main() {
    int quantidade;
    scanf("%d", &quantidade);

    int num;
    char string[500];
    char *cat;
    while (quantidade--) {
        scanf("%d ", &num);
        fgets(string, 500, stdin);

        cat = concat(num, string);
        printf("%s\n", cat);

        free(cat);
    }

    return 0;
}