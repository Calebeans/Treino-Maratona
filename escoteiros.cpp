#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> K(N);
    for(int i = 0; i < N; i++) {
        cin >> K[i];
    }

    long long totalCombinacoes = 1;
    for(int i = 0; i < N; i++) {
        totalCombinacoes *= K[i];
    }

    cout << totalCombinacoes;
    cout << endl;

    return 0;
}
