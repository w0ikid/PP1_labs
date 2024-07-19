#include <iostream>

using namespace std;
// 65 - 90 A - Z
// 97 - 122
int main(){
    int k;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++){
        k = (int)s[i];
        if (k >= 97 && k <= 122){
            k = k - 32;
            cout << (char)k;
        }
        else{
            cout << s[i];
        }
    }
}