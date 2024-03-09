#include <iostream>
#include <cmath>
using namespace std;

double distancia(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

bool trianguloRetangulo(int xa, int ya, int xb, int yb, int xc, int yc) {
    double a = distancia(xa, ya, xb, yb);
    double b = distancia(xb, yb, xc, yc);
    double c = distancia(xc, yc, xa, ya);

    return (a * a + b * b == c * c) || (b * b + c * c == a * a) || (c * c + a * a == b * b);
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int xa, ya, xb, yb, xc, yc;
        cin >> xa >> ya >> xb >> yb >> xc >> yc;

        if (trianguloRetangulo(xa, ya, xb, yb, xc, yc)) {
            cout << "sim" << endl;
        } else {
            cout << "nao" << endl;
        }
    }
    cout << endl;

    return 0;
}
