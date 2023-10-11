// Fazer um programa que leia um valor de tempo expresso em horas, minutos e segundos e que converta
// esse tempo para um valor em segundos.

#include <stdio.h>
 
int main() {
    int h, m, s;
    scanf("%d\n%d\n%d\n", &h, &m, &s);
 
    s += (h * 3600) + (m * 60);
 
    printf("O TEMPO EM SEGUNDOS E = %d", s);
    
    return 0;
}