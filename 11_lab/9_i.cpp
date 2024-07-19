#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char, int>mp;
    for(int i=0; i<s.size(); i++){
        mp[s[i]] = (mp[s[i]]+1)%2;
    }
    int res=0;
    for(auto it:mp){
        if(it.second%2)res++;
    }
    if(res<=1) cout<< "ZA WARUDO TOKI WO TOMARE";
    else cout<< "JOJO";
    
    return 0;
}