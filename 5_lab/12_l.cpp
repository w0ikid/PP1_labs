#include <iostream>
// 97 - 122
// abbcccddee
using namespace std;

int main(){
    int k = 97;
    string s, sorted_s;
    cin >> s;
    sorted_s = s[0];

    for (int i = 1; i < s.length(); i++){
        if (s[i - 1] != s[i]){
            sorted_s = sorted_s + s[i];
        }
    }

    for (int i = 0; i < sorted_s.length(); i++){
        if ((int)sorted_s[i] != k){
            cout << "NO";
            return 0;
        }
        k++;
    }
    cout << "YES";
    return 0;    
}