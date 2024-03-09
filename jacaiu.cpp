#include <iostream>
 
using namespace std;
 
int main() {     
  
  int N, L, C;
  int totalQuebrados = 0;

  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> L >> C;
    if(L > C){
        totalQuebrados += C;
    }
  }

  cout << totalQuebrados;  
 
  cout << endl;
  return 0;
}