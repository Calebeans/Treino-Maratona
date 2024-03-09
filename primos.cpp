#include <iostream>
#include <vector>
using namespace std;

bool primo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int A, B;
    cin >> A >> B;

    vector<int> primos;

    for (int i = A; i <= B; ++i) {
        if (primo(i)) {
            primos.push_back(i);
        }
    }

    string s = "";
    for (int primo : primos)
    {
        cout << s << primo;
        s = " ";
    }
    cout << endl;

    return 0;
}
