#include <iostream>
#include <vector>

using namespace std;

vector<unsigned long long> memo(21, 0);

unsigned long long fatorial(int n) {
    if (n == 0) return 1;
    if (memo[n] != 0) return memo[n];
    return memo[n] = n * fatorial(n - 1);
}

int main() {
    int M, N;
    while(cin >> M >> N) {
        unsigned long long soma = fatorial(M) + fatorial(N);
        cout << soma << endl;
    }
    return 0;
}
