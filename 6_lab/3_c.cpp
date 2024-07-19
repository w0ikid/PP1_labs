#include <iostream>
    
using namespace std;
int elements(int* a, int* b, int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i] == b[j]){
                b[j] = 0;
                sum++;
            }
        }
    }
    return sum;
}
int main(){
    long long int n;
    cin >> n;
    int a[n], b[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        cin >> b[i];
    }

    cout << elements(a, b, n);
    return 0;
}