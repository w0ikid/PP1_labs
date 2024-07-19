#include <iostream>
#include <string>

using namespace std;

string queue(string s){
    string t;
    bool check = true;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '1' && i == s.length() - 1 && check == true){
            t = t + '1';
        }
        else if (s[i] == '1'){
            if (check == false){
                check = true;
                continue;
            }
            check = false;
        }
        else{
            if (check == false){
                t = t + '1';
            }
            t = t + '0';
            check = true;
        }
    }
    return t;
}

int main(){
    string s;
    cin >> s;

    cout << queue(s);
    return 0;
}
