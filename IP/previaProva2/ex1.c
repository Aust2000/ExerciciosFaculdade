#include <stdio.h>
#include <string.h>

int leds(char num) {
    if (num == '8') {
        return 7;
    } else if (num == '6' || num == '9' || num == '0') {
        return 6;
    } else if (num == '5' || num == '3' || num == '2') {
        return 5;
    } else if (num == '7') {
        return 3;
    } else if (num == '1') {
        return 2;
    }
    return 4;
}

int main() {
    int quantidade;
    scanf("%d", &quantidade);

    char num[100];
    int resultado;
    while (quantidade--) {
        scanf("%s", num);

        resultado = 0;
        for (int i = 0; i < strlen(num); i++) {
            resultado += leds(num[i]);
        }

        printf("%d leds\n", resultado);
    }
    
    return 0;
}