// EU ODEIO ESSE SHARIF MALDITO

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);

    int tempNum = num;
    int result = 0;
    int temp;
    int control = 0;

    int i = 4;
    for (; i >= 0; i--) { 
        int power = pow(10, i);
        int resultPower = pow(10, control);
        // coloquei as potências em variaveis porque por algum motivo o resultado da potência sai diferente se eu não fizer isso

        if ((tempNum / power) <= 0 && control == 0) {
            continue;
        }

        temp = tempNum / power;
        result += temp * resultPower;
        tempNum -= temp * power;

        control++;
    }

    if (num / 100000 > 0) {
        printf("NUMERO INVALIDO");
    }
    else if(num == result) {
        printf("PALINDROMO");
    }
    else {
        printf("NAO PALINDROMO");
    }
    
    return 0;
}