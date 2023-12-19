#include <stdio.h>

void concatena(int *a, int tamA, int *b, int tamB, int *c) {
    int i = 0, j = 0, k = 0;
    while (i < tamA && j < tamB) {
        while (a[i] % 2 != 0 && i < tamA) {
            i++;
        }
        if (a[i] % 2 == 0 && i < tamA) {
            c[k++] = a[i++];
        }
        while (b[j] % 2 == 0 && j < tamB) {
            j++;
        }
        if (b[j] % 2 != 0 && j < tamB) {
            c[k++] = b[j++];
        }
    }

    while (i < tamA) {
        if (a[i] % 2 == 0) {
            c[k++] = a[i];
        }
        i++;
    }

    while (j < tamB) {    
        if (b[j] % 2 != 0) {
            c[k++] = b[j];
        }
        j++;
    }
}

int main() {
    int tamA, tamB;
    scanf("%d %d", &tamA, &tamB);

    int a[tamA];
    int b[tamB];

    int i, tamC = 0;
    for (i = 0; i < tamA; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0) {
            tamC++;
        }
    }
    for (i = 0; i < tamB; i++) {
        scanf("%d", &b[i]);
        if (b[i] % 2 != 0) {
            tamC++;
        }
    }

    int c[tamC];
    concatena(a, tamA, b, tamB, c);
    
    for (i = 0; i < tamC; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
    
    return 0;
}