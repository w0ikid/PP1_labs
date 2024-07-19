#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::string s;
    std::cin >> s;

    std::vector<std::string> squares = {"16", "25", "36", "49", "64", "81"};

    // Используйте std::find для поиска строки в векторе
    auto it = std::find(squares.begin(), squares.end(), s);

    // Проверьте, был ли элемент найден
    if (it != squares.end()) {
        std::cout << "Find in: " << std::endl;
    } else {
        std::cout << "dont find" << std::endl;
    }

    return 0;
}
