#include <bits/stdc++.h>
using namespace std;

int main() {
    int qtTestes;
    cin >> qtTestes;

    double n, m;
    for (int i = 0; i < qtTestes; i++) {
        cin >> n >> m;

        if (ceil(n/2) <= 2 || ceil(m/2) <= 2) {
            cout << ceil(n/2) << " " << ceil(m/2) << "\n";
        } else {
            cout << "1 1\n";
        }
    }
    
    return 0;
}