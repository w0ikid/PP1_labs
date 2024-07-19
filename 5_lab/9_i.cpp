#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    if (s.length() != t.length())
    {
        cout << "NO";
        return 0;
    }
    
    for (int i = 0; i < s.length(); i++)
    {
        int findLetter = t.find(s[i]); 
        if (findLetter != t.npos)
        {
            t.erase(t.begin() + findLetter);
        }
    }
    
    if (t.length() == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}