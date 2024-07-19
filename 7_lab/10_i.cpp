#include <iostream>
#include <string>

using namespace std;

int main(){
    int sum = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        sum = sum + (s[i] - 48)/2;
    }
    cout << sum;
    return 0;
}