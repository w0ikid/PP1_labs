#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> array(n);
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    int max = array[0];
    int min = array[0];
    // cout << *min_element(array.begin(), array.end()) << endl;
    // cout << *max_element(array.begin(), array.end());

    for (int i = 0; i < n; i++){
        if (array[i] > max){
            max = array[i];
        }
    }

    for (int i = 0; i < n; i++){
        if (array[i] < min){
            min = array[i];
        }
    } 
    
    cout << max - min;

    return 0;
}