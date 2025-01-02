#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    for(int i=0; i < S.length(); i++){
        cout << S[i];
        if((i+1)%10==0) cout << '\n';
    }
}