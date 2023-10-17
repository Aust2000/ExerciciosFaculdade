//pai amado que código horroroso
#include <stdio.h>

int main () {
    int x, y, z, a, b, c;
    char one, two, three;
    scanf("%d %d %d\n", &x, &y, &z);
    scanf("%c %c %c", &one, &two, &three);

    // esse tanto de if me deixa doente, mas n vale a pena fazer um algoritmo de ordenação se são só 6 possíveis ordens
    if (x > y && y > z) {
        c = x;
        b = y;
        a = z;
    }
    else if (y > x && x > z) {
        c = y;
        b = x;
        a = z;
    }
    else if (y > z && z > x) {
        c = y;
        b = z;
        a = x;
    }
    else if (z > y && y > x) {
        c = z;
        b = y;
        a = x;
    }
    else if (x > z && z > y) {
        c = x;
        b = z;
        a = y;
    }
    else {
        c = z;
        b = x;
        a = y;
    }

    switch (one)
    {
    case 'A':
        printf("%d ", a);
        break;
    case 'B':
        printf("%d ", b);
        break;
    case 'C':
        printf("%d ", c);
    default:
        break;
    }

    switch (two)
    {
    case 'A':
        printf("%d ", a);
        break;
    case 'B':
        printf("%d ", b);
        break;
    case 'C':
        printf("%d ", c);
    default:
        break;
    }

    switch (three)
    {
    case 'A':
        printf("%d", a);
        break;
    case 'B':
        printf("%d", b);
        break;
    case 'C':
        printf("%d", c);
    default:
        break;
    }

    return 0;
}