#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int minutos, segundos;
    cin >> minutos >> segundos;

    double tempoTotal = minutos + static_cast<double>(segundos) / 60.0;

    double ritmo = tempoTotal / 10.0;

    double tempoMeiaMaratona = ritmo * 21.0;

    cout << fixed << setprecision(1) << ritmo << endl;
    cout << fixed << setprecision(1) << tempoMeiaMaratona;
    cout << endl;

    return 0;
}
