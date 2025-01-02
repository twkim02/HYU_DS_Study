#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--){
        string S;
        cin >> S;
        int A = S[0]-'0';
        int B = S[2]-'0';
        cout << A+B << '\n';
    }
}