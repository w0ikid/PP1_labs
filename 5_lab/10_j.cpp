#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    s = s + s[0];

    for(int i = 0; i < s.length(); i++){
        if (s[i] == s[s.length() - 1 - i]){
            continue;
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}