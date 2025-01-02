#include <iostream>
using namespace std;

int main() {
    int A[101];
    int N, v, ans = 0;
    cin >> N;
    for(int i=0; i < N; i++){
        cin >> A[i];
    }
    cin >> v;
    for(int i=0; i < N; i++){
        if(A[i] == v){
            ans++;
        }
    }
    cout << ans;
}