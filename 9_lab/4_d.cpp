#include <iostream>
#include <vector>

using namespace std;

int coutn_k(vector <int> array, int k){
    int sum = 0;
    for (int i = 0; i < array.size(); i++){
        if (array[i] == k){
            sum++;
        }
    }
    return sum;
}

int main(){
    int n, k;
    cin >> n >> k;

    vector <int> array(n);

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    cout << coutn_k(array, k);

    return 0;


}