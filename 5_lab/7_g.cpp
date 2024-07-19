#include <iostream>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < s.length();i++){
        if (s[i] != t[i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}