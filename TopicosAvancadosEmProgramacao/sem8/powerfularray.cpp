#include <bits/stdc++.h>
using namespace std;

const int N = 200100;
const int K = 450;

struct query {
    int index, left, right;
};

bool comp(query x, query y) {
    if(x.left/K == y.left/K)
    {
        if((x.left/K)%2 == 1)
            return x.right > y.right;
        return x.right < y.right;
    }
    return x.left/K < y.left/K;
}

vector<long long> answer;
vector<query> queries;
long long vet[N];

void add(int x) {
    
}

void rmv(int x) {
}

long long calculo() {
}


int main() {
    int vectorSize, queryAmount;
    cin >> vectorSize >> queryAmount;

    for (int i = 0; i < vectorSize; i++) {
        cin >> vet[i];
    }

    for (int i = 0; i < queryAmount; i++) {
        query auxiliar;
        cin >> auxiliar.left >> auxiliar.right;
        auxiliar.left--;
        auxiliar.right--;
        auxiliar.index = i;
        queries.push_back(auxiliar);
    }


    sort(queries.begin(), queries.end(), comp);
    answer.resize(queries.size());

    int i = 0;
    int j = -1;


    for(auto currQuerie:queries) {
        int left, right, index;
        left = currQuerie.left;
        right = currQuerie.right;
        index = currQuerie.index;

        while (j < right) {
            j++;
            add(j);
        }

        while(j > right) {
            rmv(j);
            j--;
        }

        while(i < left) {
            rmv(i);
            i++;
        }

        while (i > left) {
            i--;
            add(i);
        }

        answer[index] = calculo();
    }

    for (int i = 0; i < queryAmount; i++) {
        cout << answer[i] << "\n";
    }

    return 0;
}