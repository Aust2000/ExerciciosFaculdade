#include <stdio.h>

int main() {
    char op;
    int linha;
    scanf("%d", &linha);
    scanf(" %c", &op);

    double matrix[12][12];
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    double final;
    for (int i = 0; i < 12; i++) {
        final += matrix[linha][i];
    }
    if (op == 'M') {
        final /= 12;
    }
    printf("%.1lf\n", final);
    
    return 0;
}