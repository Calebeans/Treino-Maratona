#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> listra(N);
    vector<int> distancias(N, N);
    int distancia = N;

    for(int i = 0; i < N; i++){
        cin >> listra[i];
        if(listra[i] == 0){
            distancia = 0;
        }else {
            distancia++;
        }
        distancias[i] = distancia;
    }

    distancia = N;
    for(int i = N-1; i >=0; i--) {
        if(listra[i] == 0){
            distancia = 0;
        }else {
            distancia++;
        }
        listra[i] = min(distancias[i], min(distancia, 9));
    }

    for (int i = 0; i < N; i++){
        cout << listra[i] << " ";
    }
    
    cout << endl;
    return 0;
}
