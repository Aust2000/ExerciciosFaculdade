// Escreva um algoritmo par ler um valor em reais e calcular qual o menor número possível de notas de $R
// 100, $R 50, $R 10 e moedas de $R 1 em que o valor lido pode ser decomposto. O programa deve escrever
// a quantidade de cada nota e moeda a ser utilizada

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int x = num / 100;
    num %= 100;

    int y = num / 50;
    num %= 50;

    int z = num / 10;
    num %= 10;

    int w = num / 1;
    num %= 1;

    printf("NOTAS DE 100 = %d\n", x);
    printf("NOTAS DE 50 = %d\n", y);
    printf("NOTAS DE 10 = %d\n", z);
    printf("MOEDAS DE 1 = %d\n", w);

    return 0;
}