#include <iostream>
using namespace std;

int main() {
    int m = 0, id;
    
    for(int i=1; i <= 9; i++){
    	int n;
		cin >> n;
		if(m < n){
			m = n;
			id = i;
		}
	}
	
	cout << m << '\n' << id;
}