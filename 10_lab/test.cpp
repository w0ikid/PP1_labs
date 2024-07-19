#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int dec_to_bin(int a){
    string t;

    while(a != 0){
        if(a % 2 == 0){
            t = t + '0';
        }
        else{
            t = t + '1';
        }
        a = a / 2;
    }
    reverse(t.begin(), t.end());
    return stoi(t);
}

int main(){
    int n;
    cin >> n;

    cout << dec_to_bin(n);

    return 0;       
}