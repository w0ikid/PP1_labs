#include <iostream>

using namespace std;

int main(){
    int sum_even = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        if ((s[i] - 48) % 2 == 0){
            sum_even++;
        }
    }
    cout << sum_even;
    return 0;
}