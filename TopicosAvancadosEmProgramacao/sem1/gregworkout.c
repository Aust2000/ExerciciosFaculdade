#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int amountExercises;
    int currNumber;
    int chestExercises = 0;
    int bicepsExercises = 0;
    int backExercises = 0;
    scanf("%d", &amountExercises);

    for (int i = 0; i < amountExercises; i++) {
        scanf("%d", &currNumber);
        
        // testa com qual número i é congruente mód 3
        if ((abs(i - 3)) % 3 == 0) {
            chestExercises += currNumber;
        } else if ((abs(i - 4)) % 3 == 0) {
            bicepsExercises += currNumber;
        } else if ((abs(i - 5)) % 3 == 0) {
            backExercises += currNumber;
        }
    }

    if (chestExercises > bicepsExercises && chestExercises > backExercises) {
        printf("chest\n");
    } else if (bicepsExercises > chestExercises && bicepsExercises > backExercises) {
        printf("biceps\n");
    } else {
        printf("back\n");
    }
    
    return 0;
}