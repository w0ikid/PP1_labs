#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, a, b;
    cin >> n;
    vector <int> array(n);
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    cin >> a >> b;
    
    reverse(array.begin() + a, array.begin() + b + 1);

    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    return 0;
}