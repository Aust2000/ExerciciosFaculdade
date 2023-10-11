#include <stdio.h>
#include <math.h>
 
int main() {
    double h, a;
    scanf("%lf\n%lf", &h, &a);
 
    double ab = (3 * a * a * sqrt(3)) / 2;
    double result = (ab * h) / 3;
 
    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n", result);
    
    return 0;
}