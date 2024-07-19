#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    char x;
    cin >> x;
    int n, sum = 0;
    cin >> n;

    for (int i = 0; i < s.length(); i++){
        if (s[i] == x){
            sum++;
        }
    }
    if (sum == n){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}