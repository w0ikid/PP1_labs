#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    map<char, int>mp;
    for(int i=0; i<n; i++){
        cin>>s;
        set<char>st(s.begin(), s.end());
        for(auto i:st) mp[i]++;
    }
    bool res=true;
    for(auto i:mp){
        if(i.second==n){
            cout<<i.first<<" ";
            res=false;
        }
    }
    if(res) cout<< "NO COMMON CHARACTERS";
    return 0;
}
