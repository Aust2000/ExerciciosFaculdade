#include <stdio.h>

int divisorsSum(int num) {
    int sum = 0;
    for (int i = num; i >= 1; i--) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int cap, num2, num3;
    scanf("%d", &cap);
    
    int num = 200;
    for (int i = 1; i <= cap; ) {
        num2 = divisorsSum(num);
        num3 = divisorsSum(num2);
        if (num == num3 && num != num2) {
            printf("(%d,%d)", num, num2);
            i++;
        }

        num++;
    }
    
    return 0;
}