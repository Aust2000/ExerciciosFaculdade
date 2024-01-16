#include <stdio.h>
//#include <stdlib.h>

int multiplicacao (int num1, int num2) {
    if (num1 == 0 /*|| num2 == 0*/) {
        return 0;
    }
    return num2 + multiplicacao(num1 - 1, num2);
}

int main() {
    int quantidadeInputs;
    scanf("%d", &quantidadeInputs);

    int num1, num2;
    while (quantidadeInputs--) {
        scanf("%d %d", &num1, &num2);
        printf("%d\n", multiplicacao(num1, num2));
    }

    return 0;
}