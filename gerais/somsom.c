//Crie uma função que calcule
//o somatório x = sum 1-n(sum 1-j(sum 1-k(i + j + k)))
//onde n, m e l são dados pelo usuário

#include <stdio.h>

int main() {
    int n, m, l;
    scanf("%d\n%d\n%d", &n, &m, &l);

    int result = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            for (int k = 1; k <= l; k++) {
                result += (i + j + k);
            }
        }
    }

    printf("%d\n", result);
    
    return 0;
}