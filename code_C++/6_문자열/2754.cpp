#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;
    if(S == "A+"){
        cout << "4.3";
    }
    else if(S == "A0"){
        cout << "4.0";
    }
    else if(S == "A-"){
        cout << "3.7";
    }
    else if(S == "B+"){
        cout << "3.3";
    }
    else if(S == "B0"){
        cout << "3.0";
    }
    else if(S == "B-"){
        cout << "2.7";
    }
    else if(S == "C+"){
        cout << "2.3";
    }
    else if(S == "C0"){
        cout << "2.0";
    }
    else if(S == "C-"){
        cout << "1.7";
    }
    else if(S == "D+"){
        cout << "1.3";
    }
    else if(S == "D0"){
        cout << "1.0";
    }
    else if(S == "D-"){
        cout << "0.7";
    }
    else{
        cout << "0.0";
    }
}