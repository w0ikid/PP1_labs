#include <iostream>

using namespace std;

void simple(int n){
    if (n > 0){
        simple(n - 1);
        cout << n << " ";
    }
}
int main(){
    int n;
    cin >> n;
    simple(n);
    return 0;
}