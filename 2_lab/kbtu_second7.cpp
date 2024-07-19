#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    cin >> n;
    vector <int> a(n);

    // add

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    k = a[0];

    // treatment

    for (int i = 0; i < n; i++){
        if (k < a[i]){
            k = a[i];
        }
    }
    
    // find max
    cout << k;
    return 0;
}