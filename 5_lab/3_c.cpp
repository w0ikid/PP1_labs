#include <iostream>

using namespace std;


int main() {
    string s, t;
    cin >> s >> t;

    if(s.find(t) != string::npos) {
        cout << "yes";
    } 
    else{
        cout << "no";
    }

    return 0;
}
