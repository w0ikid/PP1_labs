#include <iostream>
// 97 - 122
using namespace std;

int main(){
    char x;
    string s;
    cin >> s;
    int max = s[0];
    x = s[0];
    for (int i = 1; i < s.length(); i++){
        if ((int)s[i] > max){
            max = (int)s[i];
            x = s[i];
        }
    }
    cout << x;
    return 0; 
}