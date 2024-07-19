#include <iostream>

using namespace std;
// 65 - 90 A - Z
// 97 - 122
int main(){
    int sum_capitals = 0, sum_small = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++){
        if ((int)s[i] >= 65 && (int)s[i] <= 90){
            sum_capitals++;
        }
        else{
            sum_small++;
        }
    }
    cout << sum_small << " " << sum_capitals;
}