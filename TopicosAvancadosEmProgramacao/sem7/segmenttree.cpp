#include <bits/stdc++.h>
using namespace std;

int merge(int x, int y) {
    if (x < y) {
        return x;
    }
    return y;
}

void buildSegmentTree(vector<int> &vector, vector<int> &tree, int position, int leftLimit, int rightLimit) {
    if (leftLimit == rightLimit) {
        tree[position] = vector[leftLimit];
    } else {
        int mid = (leftLimit + rightLimit)/2;
        buildSegmentTree(vector, tree, 2*position, leftLimit, mid);
        buildSegmentTree(vector, tree, 2*position + 1, mid+1, rightLimit);
        tree[p] = merge(tree[2*p], tree[2*p + 1]);
    }
}

// não to entendendo o update legal não
void updateSegmentTree(vector<int> &tree, int currentPosition, int leftLimit, int rightLimit, int intendedPosition, int value) {
    if (leftLimit == rightLimit) {
        tree[currentPosition] = value;
    } else {
        int mid = (leftLimit + rightLimit)/2
        if (pos <= mid) {
            updateSegmentTree(tree, 2*currentPosition, leftLimit, mid, intendedPosition, value);
        } else {
            updateSegmentTree(tree ,2*currentPosition + 1, mid+1, rightLimit, intendedPosition, value);
        }
    }
}

int main() {
    int n;
    
    vector<int> vetor(n);
    vector<int> segmentTree(4*n);
    
    return 0;
}