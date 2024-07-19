#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    int n,m ;
    cin>>n>>m;
    vector<int>f(n); vector<int>s(m);
    for(int i=0; i<n; i++)cin>>f[i];
    for(int i=0; i<m; i++)cin>>s[i];
    vector<int>::iterator ip = unique(f.begin(), f.end());
    f.erase(ip, f.end());
    ip= unique(s.begin(), s.end());
    s.erase(ip, s.end());
    vector<int>t;
    for(int i=0; i<max(f.size(), s.size()); i++){
        if(i<f.size()) t.pb(f[i]);
        if(i<s.size()) t.pb(s[i]);
    }
    ip = unique(t.begin(), t.end());
    t.erase(ip, t.end());
    for(int i:t) cout<<i<<" ";
}