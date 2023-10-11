// Escreva um programa para ler um número de três dígitos e imprimir o número invertido.

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int x = num / 100;
    num -= x * 100;

    int y = num / 10;
    num -= y * 10;

    int z = num;

    int result = (z * 100) + (y * 10) + x;
    printf("%d", result);

    return 0;
}