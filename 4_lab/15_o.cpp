#include <iostream>

using namespace std;

int main(){
    int n, max, pos = 1;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    max = a[0][0];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j && a[i][j] > max){
                max = a[i][j];
                pos = i + 1;
            }
        }
    }
    //Maximum element is: -1 with coordinates: 1;1
    cout << "Maximum element is: " << max << " with coordinates: " << pos << ";" << pos;
    return 0;
}