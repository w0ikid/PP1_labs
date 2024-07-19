#include <iostream>

using namespace std;

int main(){
    int n, m, k = 0, sum_row = 0, sum_column = 0;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    // sum row elements

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (j == m - 1){
                sum_row = sum_row + a[i][j];
                cout << "The sum of row number " << i + 1 << " is " << sum_row << endl;
                sum_row = 0;
                continue; 
            }
            sum_row = sum_row + a[i][j];
        }
    }
    // sum columns
    
    for (int i = 0; i < n; i++){
        if (k == m){
                break;
            }
        sum_column = sum_column + a[i][k];
        if (i == n - 1){
            i = -1;
            k = k + 1;
            cout << "The sum of column number " << k << " is " << sum_column << endl;
            sum_column = 0;
        }
    }

    return 0;
}