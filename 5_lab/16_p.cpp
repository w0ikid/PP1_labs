#include <iostream>
// 97 - 122
using namespace std;

int main(){
    int shift;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == 'z'){
            cout << "a";
            continue;
        }
        shift = (int)s[i] + 1;
        cout << (char)shift; 
    }
    return 0;
}