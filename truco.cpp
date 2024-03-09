#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int totalJogos = N * (N - 1) / 2;

    cout << totalJogos;
    cout << endl;

    return 0;
}