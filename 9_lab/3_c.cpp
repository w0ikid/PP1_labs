#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


/*  

    input:
    1 2 2 1
    output:
    2

    input:
    2 2 2 
    output:
    1

*/


int at_least_2times(vector <int> array){
    int sum = 0;
    for (int i = 0; i < array.size(); i++){
        for (int j = 0; j < array.size(); j++){
            if (j > i){
                if (array[i] == array[j] && array[i] != 0 && array[j] != 0){
                    sum++;
                    array[i] = 0, array[j] = 0;
                }
            } 
        }
    }

    return sum;

}
int main(){
    int n;
    cin >> n;
    vector <int> array(n);

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    cout << at_least_2times(array);

    return 0;
}