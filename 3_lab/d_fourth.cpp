#include <iostream>
#include <vector> 

using namespace std;

int main(){
    int n, max, sum_maximus = 0, index_maximus = 0;
    cin >> n;
    vector <int> a(n);

    // add

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    max = a[0];

    // find max element in a

    for (int i = 0; i < n; i++){
        if (max <= a[i]){
            max = a[i];
            index_maximus = i;
        }
    }

    // find sum_max element in a

    for (int i = 0; i < n; i++){
        if (max == a[i]){
            sum_maximus++;
        }
    }

    if (sum_maximus > 1){
        cout << a[0];
    }
    else{
        cout << index_maximus + 1;
    }

    return 0;
}