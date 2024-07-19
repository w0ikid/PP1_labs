#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if (a == 0){
        return 0;
    }
    else if (b == 0){
        return 0;
    }

    else if (a == b){
        return a;
    }

    else if (a > b){
        return gcd(a - b, b);
    }
    return gcd(a, b - a);
}

int nice_joke(vector <int> array){
    vector <int> s;

    for (int i = 0; i < array.size();i++){
        for (int j = 1; j < array.size() ;j++){
            if (j > i){
                s.push_back(gcd(array[i], array[j]));
            }

        } 
    }

    // find max value in array

    int max = s[0];

    for (int i = 0; i < s.size(); i++){
        if (s[i] > max){
            max = s[i];
        }
    }

    return max;

}

int main(){
    int n;
    cin >> n;
    vector <int> array(n);
    vector <int> s;
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    cout << nice_joke(array);

    return 0;
}