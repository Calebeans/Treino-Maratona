#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        long long T, I, A;
        cin >> T >> I >> A;

        long long total  = 0;
        int meses = 0;

        while (total < T) {
            total += I ;
            I += A;
            meses++;
        }

        cout << meses << endl;
    }
    cout << endl;

    return 0;
}
