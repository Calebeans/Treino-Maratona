#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    

    int N, M;
    cin >> N >> M;
    vector<int> vp(N);

    for (int i = 0; i < N; i++)
    {
        cin >> vp[i];
    }

    sort(vp.rbegin(), vp.rend());

    int pacientes = 0;
    for(int i = 0; i < N && M > 0; i++) {
        pacientes += (M + vp[i] - 1) / vp[i];
        M -= vp[i] * ((M + vp[i] - 1) / vp[i]);
    }

    cout << pacientes << endl;

    return 0;
}
