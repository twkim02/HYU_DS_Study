#include <iostream>
using namespace std;

int main() {
    string S;
    while(true){
        getline(cin, S);
        if(S=="") break;
        cout << S << endl;
    }
}