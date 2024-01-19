#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numerador;
    int denominador;
} numRacional;

numRacional inverso(numRacional *num) {
    numRacional resultado;
    int temp;
    temp = num->denominador;
    num->denominador = num->numerador;
    num->numerador = temp;
    return *num;
}

int maximoDivisorComun (int num1, int num2) {
    if (num2 == 0) return num1;
    return maximoDivisorComun(num2, num1 % num2);
}

numRacional racional(int num1, int num2) {
    numRacional resultado;
    resultado.numerador = num1;
    resultado.denominador = num2;
    return resultado;
}

numRacional oposto(numRacional *num) {
    num->denominador = num->denominador * -1;
    return *num;
}

numRacional soma(numRacional num1, numRacional num2) {
    int denominadorFinal = maximoDivisorComun(num1.denominador, num2.denominador);
    int termo1 = (num1.denominador / denominadorFinal) * num1.numerador;
    int termo2 = (num2.denominador / denominadorFinal) * num2.numerador;
    numRacional resultado;
    resultado.numerador = termo1 + termo2;
    resultado.denominador = denominadorFinal;
    return resultado;
}

numRacional multiplicacao(numRacional num1, numRacional num2) {
    numRacional resultado;
    resultado.numerador = num1.numerador * num2.numerador;
    resultado.denominador = num1.denominador * num2.denominador;
    return resultado;
}

numRacional divisao(numRacional num1, numRacional num2) {
    return multiplicacao(num1, inverso(&num2));
}

numRacional fracaoMinima(numRacional num) {
    numRacional resultado;
    int maximoDivisorComum = maximoDivisorComun(num.numerador, num.denominador);
    resultado.numerador = num.numerador / maximoDivisorComum;
    resultado.denominador = num.denominador / maximoDivisorComum;
    return resultado;
}

void printRacional(numRacional racional) {
    printf("%d %d\n", racional.numerador, racional.denominador);
}

int main() {
    numRacional num1, num2, resultado;
    char operacao;
    while (scanf("%d %d %c %d %d", &num1.numerador, &num1.denominador, &operacao, &num2.numerador, &num2.denominador) != EOF) {
        switch (operacao) {
            case '+':
                resultado = soma(num1, num2);
                break;
            case '-':
                resultado = soma(num1, oposto(&num2));
                break;
            case '*':
                resultado = multiplicacao(num1, num2);
                break;
            case '/':
                resultado = divisao(num1, num2);
                break;
            default:
                break;
        }

        printRacional(fracaoMinima(resultado));
    }

    return 0;
}