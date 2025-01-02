#include <iostream>
using namespace std;

long long func(int A, int B) {
    return (long long)(A+B)*(A-B);
}

int main() {
    int A, B;
    cin >> A >> B;
    cout << func(A, B);
}