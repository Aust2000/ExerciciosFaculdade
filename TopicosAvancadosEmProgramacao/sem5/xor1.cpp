#include <bits/stdc++.h>
using namespace std;

const int MAXLENGTH = 300000;

long long int xorUpTo(int index, vector<long long int> &binariesArray) {
    long long int sum = 0;
    while (index) {
        sum ^= binariesArray[index];
        index -= (index & -index);
    }
    return sum;
}   

void update(int index, long long int value, vector<long long int> &array, vector<long long int> &binariesArray) {
    while(index < array.size()) {
        binariesArray[index] ^= value;
        index += (index & -index);
    }
}

int main() {
    int querieNum, arrayLength;
    cin >> arrayLength >> querieNum;

    vector<long long int> array(MAXLENGTH), binariesArray(MAXLENGTH, 0);

    for (int i = 1; i <= arrayLength; i++) {
        cin >> array[i];
        update(i, array[i], array, binariesArray);
    }

    int starterIndex, endIndex;
    for (int i = 0; i < querieNum; i++) {
        cin >> starterIndex >> endIndex;
        cout << (xorUpTo(endIndex, binariesArray) ^ xorUpTo(starterIndex - 1, binariesArray))  << "\n";
    }
    
    return 0;
}