#include <iostream>

using namespace std;

int main(){
    int n,l,r;
    cin >> n >> l >> r;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < l - 1; i++){
        cout << a[i] << " ";
    }
    
    for (int i = r - 1; i >= l - 1; i--){
        cout << a[i] << " ";
    }

    for (int i = r; i < n; i++){
        cout << a[i] << " ";
    }


    return 0;
}