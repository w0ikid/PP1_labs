#include <iostream>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    int array[m][n];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> array[i][j];
        }
    }

    int k;
    cin >> k;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (k < array[i][j]){
                cout << "Penalty!";
                return 0;
            }
        }
    }

    cout << "No penalty for today.";

    return 0;
}