#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string palavra;
    cin >> palavra;

    sort(palavra.begin(), palavra.end());

    cout << palavra;

    return 0;
}