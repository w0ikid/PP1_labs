#include <iostream>

using namespace std;

string valid(string s){
    string even = "02468";
    for (int i = 0 ; i < s.length(); i++){
        if (even.find(s[i]) == -1){
            return "Not valid";
        }
    }
    return "Valid";
}

int main(){
    string s;
    cin >> s;
    cout << valid(s);
    return 0;
}