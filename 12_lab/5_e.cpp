#include <iostream>

using namespace std;

string dec_to_hex(int n){
    string t = "";
    int k;

    while (n != 0){
        k = n % 16;
        if (k >= 10 || n < 10){
            t = t + (char)(k + '0');
        }
        else {
            t = t + (char)(k + 'A' - 10);
        }
        n = n / 16;
    }
    return t;

}

int main(){
    int n;
    cin >> n;

    cout  << dec_to_hex(n);

    return 0;
}