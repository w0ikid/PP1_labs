#include <iostream>
#include <set>

int main () {
    int l;
    std:: cin >> l;
    std:: set <int> integers;

    for (int i = 0; i < l; i++)
    {
        int temp;
        std:: cin >> temp;
        integers.insert(temp);
    }
    
    integers.size() == l ? std:: cout << "YES" : std:: cout << "NO";

    return 0;
}