#include <iostream>

using namespace std;
int sum_digits(string s){
    int sum = 0;
    for (int i = 0; i < s.length(); i++){
        sum = sum + s[i] - 48;        
    }
    return sum;
}
int main(){
    string s;
    cin >> s;
    cout << sum_digits(s);
    return 0;
}