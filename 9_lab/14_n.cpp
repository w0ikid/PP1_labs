#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, count = 0;
    cin >> n;

    vector <int> array;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        array.push_back(a);
    }


    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j > i && find(array.begin(), array.end(),(array[i] ^ array[j])) != array.end()){
                count++;
            }
        }
    }  

    cout << count;

    return 0;
}