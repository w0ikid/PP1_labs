    #include <iostream>

    using namespace std;

    int main(){
        string s, t;
        cin >> s >> t;
        if (t.length() % s.length() == 0 && t.find(s) != string::npos){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        return 0;
    }