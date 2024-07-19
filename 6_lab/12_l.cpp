#include <iostream>
#include <string>

using namespace std;

string consequentNumbers(string s, int n){
    int consequent = 1, last_consequent = consequent;
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            consequent++;
        }
        else if (consequent >= last_consequent)
        {
            last_consequent = consequent;
            consequent = 0;
        }
    }

    if (last_consequent >= n)
    {
        return "Valid";
    }
    else
    {
        return "Not valid";
    }

}

int main (){
    string s;
    cin >> s;
    s += 'e';
    int n;
    cin >> n;

    cout << consequentNumbers(s, n);
}