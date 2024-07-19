#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ti=0, tp;
    cin>>n;
    map<int, int>mp;
    for(int i=0; i<n; i++){
        cin>>tp;
        mp[tp]++;
        ti += ((mp[tp]%2)?1:-1);
    }
    if(ti>1) cout<<"Impossible";
    else{
        int res[n], i = 0;
        for(auto v:mp){
            int x = v.second/2;
            while(x--){
                res[i] = v.first;
                res[n-1-i++] = v.first;
            }
            if(v.second%2) res[n/2] = v.first;
        }
        for(auto v:res) cout<<v<<" ";

    }

    return 0;
}