#include <stdio.h>
#include <stdlib.h>

int main() {
    int amountFriends;
    int amountBottles;
    int mlPerBottle;
    int amountLime;
    int slicesPerLime;
    int gramsOfSalt;
    int requiredDrinkPerToast;
    int requiredSaltPerToast;
    scanf("%d %d %d %d %d %d %d %d", &amountFriends, &amountBottles, &mlPerBottle, &amountLime, &slicesPerLime, &gramsOfSalt, &requiredDrinkPerToast, &requiredSaltPerToast);

    int toastsBasedOnSalt = (int)(gramsOfSalt / requiredSaltPerToast);
    int toastsBasedOnDrink = (int)((amountBottles*mlPerBottle) / requiredDrinkPerToast);
    int toastsBasedOnLime = (int)(amountLime*slicesPerLime);

    if (toastsBasedOnDrink < toastsBasedOnSalt && toastsBasedOnDrink < toastsBasedOnLime) {
        printf("%d\n", toastsBasedOnDrink / amountFriends);
    } else if (toastsBasedOnSalt < toastsBasedOnDrink && toastsBasedOnSalt < toastsBasedOnLime) {
        printf("%d\n", toastsBasedOnSalt / amountFriends);
    } else {
        printf("%d\n", toastsBasedOnLime / amountFriends);
    }
    
    return 0;
}