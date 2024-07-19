#include <iostream>
#include <stack>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    double b=0;
    stack<int> st;
    for(int i=0;i<s.size();i++){
        if(!st.empty()){
            b=sqrt(st.top()*10+(s[i]-'0'));
            if(b==round(b)) st.pop();
            else st.push(s[i]-'0');
        }
        else st.push(s[i]-'0');
    }
    if(st.empty())cout<<"Stack is empty";
    else{
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
    }

}
