#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i=1; i <= 2*N-1; i++){
    	for(int j=1; j <= N-abs(N-i); j++){
    		cout << '*';
		}
		for(int j=1; j <= 2*abs(N-i); j++){
    		cout << ' ';
		}
		for(int j=1; j <= N-abs(N-i); j++){
    		cout << '*';
		}
		cout << '\n';
	}
    
	return 0;
}