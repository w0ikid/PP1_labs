#include <iostream>
#include <string>

char shifted_char (char c, int key) {
    return ((c - 'A' + key) % 26 + 'A');
}

int main () {
    int key;
    std:: cin >> key;

    std:: string some_string;
    std:: cin >> some_string;

    for (auto &&i : some_string)
    {
        i = shifted_char(i, key);
    }
    

    std:: cout << some_string;
    return 0;
}