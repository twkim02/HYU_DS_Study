#include <iostream>
using namespace std;

int func(int X) {
    return X*X;
}

int main() {
    int x, ans=0;
    for(int i=0; i < 5; i++){
        cin >> x;
        ans += func(x);
    }
    cout << ans % 10;
}