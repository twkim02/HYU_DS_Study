#include <iostream>
using namespace std;

int main() {
    int arr[42] = {0,};
    for(int i=0; i < 10; i++){
        int x;
        cin >> x;
        arr[x%42] = 1;
    }
    int answer=0;
    for(int i=0; i < 42; i++){
        if(arr[i]>0) answer++;
    }
    cout << answer;
}