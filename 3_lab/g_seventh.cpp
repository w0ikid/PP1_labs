#include <iostream>

using namespace std;

int main(){
    int n, max, min;
    cin >> n;
    int a[n];

    // add in list

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    max = a[0];
    min = a[0];

    // find max and min element

    for (int i = 0; i < n; i++){
        if (a[i] > max){
            max = a[i];
        }
        else if (a[i] < min){
            min = a[i];
        }
    }

    for (int i = 0; i < n; i++){
        if (a[i] == max){
            cout << min << " ";
        }
        else{
            cout << a[i] << " ";
        }
    }
    return 0;


}