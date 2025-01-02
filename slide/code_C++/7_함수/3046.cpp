#include <iostream>
using namespace std;

void func(int N) {
    for(int i = 4; i <= N; i += 4){
		cout << "long ";
	}
}

int main() {
    int N;
	cin >> N;
	func(N);
	cout << "int";
}