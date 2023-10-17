#include <stdio.h>

int divisorsSum(int num) {
    int sum;
    for (int i = num; i >= 1; i--) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int cap;
    scanf("%d", &cap);
    
    for (int i = 1; i <= )
    
    return 0;
}