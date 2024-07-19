#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, t;
    int n;
    cin >> n;
    
    while(n != 0){
        if (n % 2 == 0){
            s = '0' + s; 
            n = n / 2;
        }
        else{
            s = '1' + s;
            n = n / 2;
        }
    }

    t = s;

    int k = stoi(t, 0, 2);
    
    cout << t;

    return 0;
}
