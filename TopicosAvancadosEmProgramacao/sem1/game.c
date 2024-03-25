#include <stdio.h>
#include <stdlib.h>

int main() {
    int qtTimes;
    scanf("%d", &qtTimes);

    int coresCasa[30];
    int coresFora[30];
    for (int i = 0; i < qtTimes; i++) {
        scanf("%d %d", &coresCasa[i], &coresFora[i]);
    }

    int qtCamisasForaEmCasa = 0;
    for (int i = 0; i < qtTimes; i++) {
        for (int j = 0; j < qtTimes; j++) {
            if (coresCasa[i] == coresFora[j]) {
                qtCamisasForaEmCasa++;
            }
        }
    }

    printf("%d\n", qtCamisasForaEmCasa);

    return 0;
}