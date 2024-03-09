#include <iostream>

using namespace std;

int main() {
    int N, V;
    cin >> N >> V;

    long long totalCombinacoes = 1;
    for(int i = 0; i < N; i++) {
        totalCombinacoes *= V;
    }

    cout << totalCombinacoes;
    cout << endl;

    return 0;
}
