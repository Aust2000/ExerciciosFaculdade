#include <stdio.h>

int main () {
    int cc, dr, rt;
    scanf("%d\n%d\n%d", &cc, &dr, &rt);

    int final = 0;
    if (cc < 7) {
        final += 1;
    }
    if (dr > 50) {
        final += 2;
    }
    if (rt > 80000) {
        final += 4;
    }

    switch (final) {
    case 7:
        final = 10;
        break;
    case 3:
        final = 9;
        break;
    case 1:
        final = 8;
        break;
    default:
        final = 7;
        break;
    }

    printf("ACO DE GRAU = %d", final);
    
    return 0;
}