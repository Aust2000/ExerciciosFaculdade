// Dado um sistema de equações lineares do tipo:
// ax+by = c
// dx+ey = f
// Escreva um programa para ler os valores dos coeficientes: a,b, c,d, e e f e calcular os valores de x e y

#include <stdio.h>

int main() {
    double a, b, c, d, e, f;

    scanf("%lf\n%lf\n%lf\n%lf\n%lf\n%lf", &a, &b, &c, &d, &e, &f);

    double x = ((f * b) - (e * c)) / ((d * b) - (a * e));
    double y = (c - (a * x)) / b;

    printf("O VALOR DE X E = %.2lf\n", x);
    printf("O VALOR DE Y E = %.2lf\n", y);
    
    return 0;
}