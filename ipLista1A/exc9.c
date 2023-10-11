// Escrever um algoritmo que leia a massa (em toneladas) de um avião, sua aceleração (m/s
// 2
// ) e o tempo (s)
// que levou do repouso até a decolagem. O programa deve calcular e escrever a velocidade atingida (Km/h),
// o comprimento da pista (m) e o trabalho mecânico realizado (J) no momento da decolagem.

#include <stdio.h>
 
int main() {
    double m, a, t;
    scanf("%lf\n%lf\n%lf\n", &m, &a, &t);
    m *= 1000.0;
 
    double v = (a * t);
 
    double s = (a * t * t) / 2.0;
 
    double W = (m * v * v) / 2.0;
 
    v *= 3.6;
 
    printf("VELOCIDADE = %.2lf\n", v);
    printf("ESPACO PERCORRIDO = %.2lf\n", s);
    printf("TRABALHO REALIZADO = %.2lf", W);
    
    return 0;
}