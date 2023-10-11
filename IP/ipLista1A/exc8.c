// O custo ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor
// e dos impostos (aplicados ao custo de fábrica). Supondo que a porcentagem do distribuidor seja de x% do
// preço de fábrica e os impostos de y% do preço de fábrica, fazer um programa para ler o custo de fábrica
// de um carro, a percentagem do distribuidor e o percentual de impostos, calcular e imprimir o custo final do
// carro ao consumidor.

#include <stdio.h>
 
int main() {
    double valor, px, py;
    scanf("%lf\n%lf\n%lf\n", &valor, &px, &py);
 
    double add = px + py;
    add *= 0.01;
    add += 1;
    valor *= add;
 
    printf("O VALOR DO CARRO E = %.2lf\n", valor);
    
    return 0;
}