#include <stdio.h>
#include <math.h>

int main() {
    int qt;
    scanf("%d", &qt);

    int num, resultado;
    while (qt--) {
        scanf("%d", &num);

        resultado = pow(2, num) - 1;
        printf("%d\n", resultado);
    }
    
    return 0;
}