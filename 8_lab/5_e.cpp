#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, a, b;
    cin >> n;
    vector <int> array(n);

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    cin >> a >> b;

    array.erase(array.begin() + a, array.begin() + b + 1);
    // cout << array.size() << " --> size of array" << endl;
    for (int i = 0; i < n - abs(a - b) - 1; i++){
        cout << array[i] << " ";
    }

    return 0;
}