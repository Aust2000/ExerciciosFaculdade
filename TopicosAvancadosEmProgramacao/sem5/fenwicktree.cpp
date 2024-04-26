#include <bits/stdc++.h>
using namespace std;

const int N = 10000;

int a[N], bit[N];

int query(int x) {
    int soma = 0;
    while (x) {
        soma += bit[x];
        x -= (x & -x);
    }
    return soma;
}

void update (int x, int v) {
    while (x < N) {
        bit[x] += v;
        x += (x & -x);
    }
}

int main() {
    return 0;
}