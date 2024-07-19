#include <iostream>
#include <vector>
#include <algorithm>

std:: vector <int> reversed_by_order (std:: vector <int> array, int order) {
    std:: vector <int> result;
    std:: vector <int> till_the_order(array.begin(), array.begin() + order);

    std:: reverse(till_the_order.begin(), till_the_order.end());
    result.insert(result.end(), till_the_order.begin(), till_the_order.end());


    std:: vector <int> :: iterator it1 = array.begin() + order, it2 = array.end();
    std:: vector <int> from_the_order(it1, it2);
    std::reverse(from_the_order.begin(), from_the_order.end());

    result.insert(result.end(), from_the_order.begin(), from_the_order.end());

    return result;
}

int main () {
    int l, by_order;
    std::cin >> l >> by_order;

    std:: vector <int> sequence_of_numbers(l);
    for (int i = 0; i < l; i++)
    {
        std::cin >> sequence_of_numbers[i];
    }

    std:: vector <int> array_already_reversed_by_order = reversed_by_order(sequence_of_numbers, by_order);
    
    for (auto &&i : array_already_reversed_by_order)
    {
        std:: cout << i << ' ';
    }
    
    return 0;
}