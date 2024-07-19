#include <iostream>
#include <vector>
using namespace std;

int closestNum(vector <int> data, int a){
    int dif_bet_num;
    if (a > 0){
        dif_bet_num = abs(data[0] - a);
    } else{
        dif_bet_num = abs(data[0] + a);
    }
    int index = 0; 
    
    for (int i = 0; i < data.size(); i++){
        if (a == data[i]){
            return i;
        } else if (dif_bet_num > abs(a - data[i])){
            dif_bet_num = abs(a - data[i]);
            index = i;
        }
    }
    return index;
}

int main(){
    int n, k;
    cin >> n;

    vector <int> array(n);

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    cin >> k;

    cout << closestNum(array, k);

    return 0;
}