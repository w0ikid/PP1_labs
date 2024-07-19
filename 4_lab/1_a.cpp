#include <iostream>

using namespace std;

int main(){
    int n, max_element;
    cin >> n;
    int a[n][n];

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    max_element = a[0][0];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] > max_element){
                max_element = a[i][j];
            }
        }
    }
    cout << max_element;
    return 0;
}