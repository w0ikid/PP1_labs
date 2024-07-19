#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, max;
    cin >> n;
    vector <int> a(n);

    // add 
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    max = a[1];
    // treatment

    for (int i = 0; i < n; i++){
        if (max < a[i]){
            max = a[i];
        }
    }
    cout << max;
    return 0;
}