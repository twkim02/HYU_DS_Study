#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    
    int mon[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day = 0;
    for(int i=0; i < x; i++){
    	day += mon[i];
	}
	day += y;

    string S[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	cout << S[day%7];

	return 0;
}