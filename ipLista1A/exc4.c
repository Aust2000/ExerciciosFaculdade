// Fazer um programa para ler os valores dos coeficientes A,B e C de uma equação quadrática e calcular e
// imprimir o valor do discriminante (∆). O valor de ∆ é dado pela fórmula: ∆ = B
// 2 −4AC.

#include <stdio.h>
 
int main() {
    double a, b, c;
    scanf("%lf\n%lf\n%lf", &a, &b, &c);
 
    double delta = b * b - 4 * a * c;
 
    printf("O VALOR DE DELTA E = %.2lf", delta);
    
    return 0;
}