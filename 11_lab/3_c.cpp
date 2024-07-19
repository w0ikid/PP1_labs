#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
bool f(const pair<string, double>& p1, const pair<string, double>& p2) {
    if(p1.second < p2.second){
        return false;
    }
    else if(p1.second == p2.second){
        if(p1.first < p2.first){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<pair<string,double>> arr(n);
    for(int i  =0; i<n;i++){
        cin >> arr[i].first >> arr[i].second;
    }

    double sum = 0;
     for (int i = n - 1; i >= 0; i--) {
        sum+=arr[i].second;
        for (int j = i + 1; j < n; j++) {
            if (arr[i].first == arr[j].first) {
                arr[i].second += arr[j].second;
                arr.erase(arr.begin() + j);
                n--;
            }
        }
    }
    sort(arr.begin(),arr.end(),f);
    
    for(int i = 0;i<n;i++){
        cout << arr[i].first << " " << (arr[i].second/sum)*100 << "%" <<  endl;
    }





    return 0;
}
