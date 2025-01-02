#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int minVal = 1000001, maxVal = -1000001;
    for(int i=0; i < N; i++){
        int x;
    	cin >> x;
        if(x > maxVal) maxVal = x;
        if(x < minVal) minVal = x;
	}

    cout << minVal << ' ' << maxVal << endl;
    
	return 0;
}