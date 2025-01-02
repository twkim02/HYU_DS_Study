#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    if(N > M) cout << (long long)N-M;
    else cout << (long long)M-N;
}