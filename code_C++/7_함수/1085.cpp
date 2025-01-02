#include <iostream>
using namespace std;

int func(int x, int y, int w, int h) {
    int a = w-x;
    int b = h-y;
    if(a > x) a = x;
    if(b > y) b = y;
    
    if(a < b) return a;
    else return b;
}

int main() {
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    cout << func(x, y, w, h);
}