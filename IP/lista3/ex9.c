#include <stdio.h>
#include <string.h>

int main() {
    int quantidade;
    scanf("%d", &quantidade);

    int num1, num2;
    char nums[13000];
    char num[5];
    while (quantidade--)
    {
        strcpy(nums, "");

        scanf("%d", &num1);
        scanf("%d", &num2);

        int i;
        for (i = num1; i <= num2; i++) {
            sprintf(num, "%d", i);
            strcat(nums, num);
        }
        for (i = 0; i < strlen(nums); i++) {
            printf("%c", nums[i]);
        }
        for (i = strlen(nums) - 1; i >= 0; i--) {
            printf("%c", nums[i]);
        }
        printf("\n");
    }
    
    return 0;
}