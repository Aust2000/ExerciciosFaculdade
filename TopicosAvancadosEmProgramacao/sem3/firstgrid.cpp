#include <bits/stdc++.h>
using namespace std;

int main() {
    int qtPretos = 0;

    vector <pair <int, int>> vetorPares(4);

    char atual;
    int index = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> atual;
            if (atual == '#') {
                qtPretos++;
                vetorPares[index].first = i;
                vetorPares[index].second = j;
                index++;
            }
        }
    }

    if (qtPretos == 2 && (vetorPares[0].first != vetorPares[1].first && vetorPares[0].second != vetorPares[1].second)) {
        cout << "No";
    } else {
        cout << "Yes";
    }

    
    return 0;
}