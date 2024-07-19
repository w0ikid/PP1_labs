#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool check(int a){
    int b = sqrt(a);
    if (b * b == a){
        return true;
    }
    else{
        return false;
    }
}

string squack(string s){
    for (int i = 0; i < s.length(); i++){
        for (int j = 0; j < s.length(); j++){
            if (i + 1 == j){
                string num = "";
                num = num + s[i];
                num = num + s[j];

                // const char* arr = num.c_str();
                // size_t found = s.find(arr, 0);

                // cout << num << " ";

                int live_number = stoi(num);

                if (check(live_number) == true){
                    // cout << found << " | " << " ";
                    // s = s.erase(found, 2);
                    // cout << s << " | " << endl;
                    return squack(s.erase(i, 2));
                }
            }
        }
    }
}

int main(){
    string s;
    cin >> s;

    cout << squack(s);

    return 0;
}