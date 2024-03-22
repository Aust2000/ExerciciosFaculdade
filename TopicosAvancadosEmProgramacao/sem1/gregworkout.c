#include <stdio.h>
#include <stdlib.h>

int main() {
    int amountSessions;
    int currNumber;
    int amountChest = 0;
    scanf("%d", &amountSessions);

    for (int i = 0; i < amountSessions; i++) {
        scanf("%d", &currNumber);
        
        if (3 % (i - 0) == 0) {
            amountChest += currNumber;
        }
    }
    
    return 0;
}