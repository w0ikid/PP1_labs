#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector <string> array;
    vector<string>::iterator find_it;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        find_it = find(array.begin(), array.end(), s);
        if (find_it != array.end()){
            cout << "user already exists" << endl;
        }
        else{
            cout << "new user added" << endl;
            array.push_back(s);
        }
    }




    return 0;
}