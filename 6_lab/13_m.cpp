#include <iostream>

using namespace std;

void reverse(int n, int* array){
    for (int i = n - 1; i >= 0; i--){
        cout << array[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    reverse(n, a);
    return 0;
}