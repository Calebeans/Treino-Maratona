#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int X;
    cin >> X;

    long long totalSenhas = 10 * pow(9, X - 1);

    cout << totalSenhas;
    cout << endl;

    return 0;
}
