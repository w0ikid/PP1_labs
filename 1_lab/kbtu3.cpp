#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        return 0;
    }

    int binary = 0;
    int base = 1;

    while (n > 0) {
        int remainder = n % 2;
        binary = binary + remainder * base;
        n = n / 2;
        base = base * 10;
    }

    int k = 0;
    while (binary > 0){
        int o = binary % 10;
        k = k * 10 + o;
        binary = binary / 10;
    }
    
    int decatka = 0;
    int based = 1;

    while (k > 0){
        int nown = k  % 10;
        if (nown == 1){
            decatka += based;
        }
        based *= 2;
        k /= 10;
    }
    cout << decatka;
    return 0;
}
