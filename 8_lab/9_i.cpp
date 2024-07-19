#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string binary_search(vector <int> list, int item){

    int low = 0;
    int high = list.size() - 1;

    while(low <= high){
        int mid = (low + high) / 2;
        int guess = list[mid];

        if (guess == item){
            return "Yes";
        }
        else if(guess > item){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return "No"; // -1 none
} 

int main(){
    int n, k;
    cin >> n;
    vector <int> array(n);

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    cin >> k;
    sort(array.begin(), array.end());
    cout << binary_search(array, k);
    return 0;
}