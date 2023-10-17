#include <stdio.h>
#include <math.h>

double factorial (double x) {
    if (x == 0) {
        return 1;
    }
    
    double result = x;
    x--;
    
    for (; x >= 1; x--) {
        result *= x;
    }

    return result;
    
}

int main() {
    double x, n;
    scanf("%lf\n%lf", &x, &n);

    double sen;

    int i = 0;
    for (; i <= n; i++) {
        sen += ((pow(-1.00, i)) * pow(x, (2.00 * i + 1.00))) / factorial(2 * i + 1);
    }

    printf("seno(%.2lf) = %.6lf", x, sen);
    
    return 0;
}