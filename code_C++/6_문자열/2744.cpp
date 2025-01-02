#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    for(int i=0; i < S.length(); i++){
        if(S[i] < 'a'){
            cout << (char)(S[i]+('a'-'A'));
        }
        else{
            cout << (char)(S[i]-('a'-'A'));
        }
    }
}