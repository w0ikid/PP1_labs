#include <iostream>

using namespace std;

int main(){
    int n, m, k = 0, pos = 1, sum = 0;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    cout << "coordinates of min elements: " << endl;

    int min = a[0][0];

    for (int i = 0; i < n; i++){
        if (k == m){
            break;
        }
        else if (i == n - 1){
            if (min > a[i][k]){
                min = a[i][k];
                pos = i + 1;
            }
            sum = sum + min;
            cout << pos << ";" << k + 1 << endl;
            i = -1;
            k = k + 1;
            min = a[i + 1][k];
            pos = 0;
        }
        else {
            if (min > a[i][k]){
                min = a[i][k];
                pos = i + 1;
            }
        }
    }
    cout << endl << "Their sum:" << endl << sum;
    return 0;
}