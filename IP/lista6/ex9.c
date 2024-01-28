#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    }
    return base * potencia(base, expoente - 1);
}

int main() {
    int quantidadeInputs;
    scanf("%d", &quantidadeInputs);

    int num1, num2;
    while (quantidadeInputs--) {
        scanf("%d %d", &num1, &num2);
        printf("%d\n", potencia(num1, num2));
    }

    return 0;
}