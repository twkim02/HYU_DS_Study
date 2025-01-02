#include <iostream>
using namespace std;

int main() {
    int N, ans=0;
    string S;
    cin >> N >> S;
    for(int i=0; i < N; i++){
        ans += (S[i]-'0');
    }
    cout << ans;
}