#include <stdio.h>
#include <stdlib.h>

void vetCpy(int *org, int *dest, int tam) {
    int i = 0;
    for (; i < tam; i++) {
        dest[i] = org[i];
    }
}

void countingSort(int *A, int tam, int k) {
    k++;
    int C[k];

    int i;
    for (i = 0; i < k; i++) {
        C[i] = 0;
    }

    for (i = 0; i < tam; i++) {
        C[A[i]]++;
    }

    for (i = 1; i < k; i++) {
        C[i] += C[i - 1];
    }

    int B[tam];

    for (i = tam - 1; i >= 0; i--) {
        B[C[A[i]] - 1] = A[i];
        C[A[i]]--;
    }

    vetCpy(B, A, tam);
}

int main() {
    int tam, maior = -1, i;
    int *nums = NULL;
    while (1) {
        scanf("%d", &tam);
        if (tam == 0) {
            break;
        }
        do{
            nums = (int*) malloc(tam * sizeof(int));
        } while (nums == NULL);
            
        for (i = 0; i < tam; i++) {
            scanf("%d", &nums[i]);
            if (nums[i] > maior) {
                maior = nums[i];
            }
        }

        countingSort(nums, tam, maior);

        for (i = 0; i < tam; i++) {
            printf("%d", nums[i]);
            if (i != tam - 1) {
                printf(" ");
            }
        }
        printf("\n");

        free(nums);
    }
    
    return 0;
}