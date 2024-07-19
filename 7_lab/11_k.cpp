#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int s_max = s[0] - 48;
    for (int i = 1; i < s.length(); i++){
        if(s_max < (s[i] - 48)){
            s_max = s[i] - 48;
        }
    }

    cout << s_max;

    return 0;
}