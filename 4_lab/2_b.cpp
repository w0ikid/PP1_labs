#include <iostream>

using namespace std;

int main(){
    int n, max_1, max_2;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    max_1 = a[0][0];
    max_2 = a[0][0];
    
    // find the first largest number
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] > max_1){
                max_1 = a[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if ((a[i][j] > max_2) && (a[i][j] < max_1)){
                max_2 = a[i][j];
            }
        }
    }

    if (max_1 == max_2){
        cout << 0;
    }
    else{
        cout << max_2;
    }

    return 0;
}