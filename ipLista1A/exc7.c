// Desenvolver um algoritmo para ler os comprimentos dos três lados de um triângulo (L1, L2 e L3) e
// calcular a área do triângulo.

#include <stdio.h>
#include <math.h>
 
int main() {
    double l1, l2, l3;
    scanf("%lf\n%lf\n%lf\n", &l1, &l2, &l3);
 
    double t = (l1 + l2 + l3) / 2;
    double result = sqrt(t * (t - l1) * (t - l2) * (t - l3));
 
    printf("A AREA DO TRIANGULO E = %.2lf", result);
    
    return 0;
}