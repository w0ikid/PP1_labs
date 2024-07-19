#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    cin >> n;
    vector <int> array(n);

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    cin >> k;

    array.erase(array.begin() + k);
    
    for (int i = 0; i < n - 1; i++){
        cout << array[i] << " ";
    }

    return 0;   
}