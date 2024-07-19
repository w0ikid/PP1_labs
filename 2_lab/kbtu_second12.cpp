#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i = i * 2){
        if (i <= n){
            cout << i << " ";
        }
    }

    return 0;
}