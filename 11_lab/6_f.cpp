#include <bits/stdc++.h>
using namespace std;
int sup(int a, int b){
 while(a*b!=0){
  if(a>b)a%=b;
  else b%=a;
 }
 return a+b;
}

int main(){
 // freopen("ladder.in", "r", stdin);
 // freopen("ladder.out", "w", stdout);
 int a, b, k;
 cin>>a>>b>>k;
 int c = sup(a, b);
 vector<int>divisors;
 for(int i=c; i>=1; i--){
  if(c%i==0)divisors.push_back(i);
 }
 cout<<divisors[k-1];

}
