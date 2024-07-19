#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> array(n);
    vector <int> odd;
    vector <int> even;

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    for (int i = 0; i < n; i++){
        if (array[i] % 2 == 0){
            even.push_back(array[i]);
        }
        else{
            odd.push_back(array[i]);
        }
    }

    sort(even.begin(), even.end());
    reverse(even.begin(), even.end());

    sort(odd.begin(), odd.end());

    for (int i = 0; i < even.size(); i++){
        cout << even[i] << " ";
    }
    for (int i = 0; i < odd.size(); i++){
        cout << odd[i] << " ";
    }
    
    return 0;
}