#include <stdio.h>

void vetCpy(int *org, int *dest, int tam) {
    int i = 0;
    for (; i < tam; i++) {
        dest[i] = org[i];
    }
}

void countingSort(int *A, int tam, int k) {
    k++;
    int C[k];

    int i = 0;
    for (; i < k; i++) {
        C[i] = 0;
    }

    for (i = 0; i < tam; i++) {
        C[A[i]]++;
    }

    for (i = 1; i < k; i++) {
        C[i] += C[i - 1];
    }

    int B[tam];
    for (i = tam - 1; i >= 1; i--) {
        B[C[A[i]]] = A[i];
        C[A[i]]--;
    }

    vetCpy(B, A, tam);
}

int main() {
    int tam, maior;
    int *nums;
    while (1) {
        scanf("%d", &tam);
        if (tam == 0) {
            break;
        }

        nums = (int*)malloc(tam * sizeof(int));
        int i = 0;
        for (; i < tam; i++) {
            scanf("%d", &nums[i]);
            if (nums[i] > maior) {
                maior = nums[i];
            }
        }

        countingSort(nums, tam, maior);
    }
    
    return 0;
}