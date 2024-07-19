#include <iostream>
#include <vector>
using namespace std;

bool isPowerOfTwo(int num) {
    return (num > 0) && ((num & (num - 1)) == 0);
}

int main(){
    int n, k = 0;
    cin >> n;

    vector <int> array(n);

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    for (int i = 0; i < n; i++){
        k = (k ^ array[i]);
    }

    if (isPowerOfTwo(k) == true){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}