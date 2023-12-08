#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int quantidade;
    scanf("%d\n", &quantidade);

    char codigo[24];
    int total, grupo, tier, controle, letra;
    while (quantidade--) {
        total = 0;
        controle = 0;
        
        fgets(codigo, 24, stdin);

        for (int i = 0; i < strlen(codigo); i++) {
            if (codigo[i] == '.') {
                total++;
            } else if (controle == 0) {
                grupo = total;
            }
        
        }
        
        tier = total / grupo;
        letra = ((tier - 1) * 3) + grupo;

        printf("%c\n", (char)(letra + 96));
    }
    
    return 0;
}