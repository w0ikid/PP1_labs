#include <iostream>

using namespace std;
int max(int* array){
    int max = array[0];
    for (int i = 0; i < 4; i++){
        if (array[i] > max){
            max = array[i];
        }
    }
    return max;
} 

int main(){
    int a[4];
    for (int i = 0; i < 4; i++){
        cin >> a[i];
    }
    cout << max(a);
    return 0;
}