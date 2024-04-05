#include <bits/stdc++.h>
using namespace std;

int getDigit(int num, int position) {
    return (int)(floor(num / pow(10, position - 1))) % 10;
}

bool isLike(int num) {
    return getDigit(num, 3) * getDigit(num, 2) == getDigit(num, 1);
}

int main() {
    int number;
    cin >> number;

    while (true) {
        if (isLike(number)) {
            cout << number;
            break;
        }
        number++;
    }
    
    return 0;
}