#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    if (n > k) {
        cout << 1;
    }
    else if (n < k) {
        cout << 2;
    }
    else {
        cout << 0;
    }
    return 0;
}