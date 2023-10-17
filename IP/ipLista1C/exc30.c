#include <stdio.h>

int main() {
    int value;
    do {
        scanf("%d", &value);
        if (value <= 1) {
            printf("Fatoracao nao e possivel para o numero %d!\n", value);
        }
    } while (value <= 1);

    printf("%d = ", value);

    int first = 1;
    int i = 2;
    for (; i <= value;) {
        if (value % i == 0) {
                if (first == 0) {
                    printf(" x ");
                }
                
                printf("%d", i);
                value = value / i;
                first = 0;
        }
        else {
            i++;
        }
    }

    printf("\n");

    return 0;
}