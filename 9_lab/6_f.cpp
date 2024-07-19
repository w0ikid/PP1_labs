#include <bits/stdc++.h>
#include <sstream>
#include <string>

std::string removed_string(std::string brackets) {
    std::string to_be_found = "()";

    while (!brackets.empty()) {
        auto it = search(brackets.begin(), brackets.end(), to_be_found.begin(), to_be_found.end());
    
        if (it != brackets.end()) {
            brackets.erase(it, it + to_be_found.length());
        } else {
            return "NO";
        }
    }

    return "YES";
}

int main() {
    std::string s;
    std::cin >> s;

    std::cout << removed_string(s);


    return 0;
}