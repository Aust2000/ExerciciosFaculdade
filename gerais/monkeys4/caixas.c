#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    double x = (3 * b - sqrt(8 * pow(b, 2) + 10) / -12);

    double volume = x * (a - 2 * x) * ((b - 3 * x) / 2);

    printf("%.8lf %.8lf\n", x, volume);
    
    return 0;
}