#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int c[n];

    for(int i = 0;i < n;i++){
        cin >> c[i];
    }

    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < (n - 1) - i; j++){
            if (c[j] < c[j + 1]){
                int temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++){
        cout << c[i] << " ";
    }

    return 0;
}