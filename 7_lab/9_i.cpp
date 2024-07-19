// #include <iostream>
// #include <string>
// #include <sstream>
// using namespace std;

// int main(){
//     string s;
//     getline(cin, s);
//     stringstream ss(s);

//     int number, sum = 0;
    
//     while(ss >> number && number != 0){
//         sum = sum + number;
//     }

//     cout << sum;

//     return 0;
// }

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int number, sum = 0;

    while(cin >> number && number != 0){
        sum = sum + number;
    }
    
    cout << sum;

    return 0;
}