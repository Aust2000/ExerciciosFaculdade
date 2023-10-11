// Um fabricante de latas deseja desenvolver um programa para calcular o custo de uma lata cilíndrica de
// alumínio, sabendo-se que o custo do alumínio por m2
// é R$ 100,00.

#include <stdio.h>
#define PI 3.14159
 
int main() {
    double r, h;
    scanf("%lf\n%lf", &r, &h);
 
    double area = 2 * (PI * r * r) + (2 * PI * r * h);
 
    double price = area * 100;
 
    printf("O VALOR DO CUSTO E = %.2lf\n", price);
    
    return 0;
}