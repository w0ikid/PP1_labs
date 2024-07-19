#include <iostream>
#include <string>

using namespace std;

string to_lower(string s){
    string t;
    for (int i = 0; i < s.length(); i++){
        t = t + (char)tolower(s[i]);
    }
    return t;
}

int main(){
    string s;
    cin >> s;
    cout << to_lower(s);
    return 0;
}