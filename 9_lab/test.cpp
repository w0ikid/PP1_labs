#include <iostream>

using namespace std;

int main(){
    for (int i = 0; i < 5; i++){
        for (int j = i; j < 5; j++){
            cout << i << j << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (j > i){
                cout << i  << j << " ";
            }
        }
        cout << endl;
    }
}