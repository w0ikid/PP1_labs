#include <iostream>
#include <vector>
// insert(position, value)
using namespace std;

int main(){
    int n, k, a;
    cin >> n;
    vector <int> array(n);
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    cin >> k >> a;

    array.insert(array.begin() + k, a);

    for (int i = 0; i < n + 1; i++){
        cout << array[i] << " ";
    }

    return 0;
}