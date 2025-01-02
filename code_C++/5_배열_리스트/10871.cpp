#include <iostream>
using namespace std;

int main() {
    int A[10001];
    int N, X;
    cin >> N >> X;
    for(int i=0; i < N; i++){
        cin >> A[i];
    }
    for(int i=0; i < N; i++){
        if(A[i] < X){
            cout << A[i] << ' ';
        }
    }
}