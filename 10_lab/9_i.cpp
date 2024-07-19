#include <iostream>
#include <vector>
#include <algorithm>

void print_if_numbers_the_same (std:: vector <int> array) {
    std:: vector <int> reversed_sequence_of_number = array;
    std:: reverse (reversed_sequence_of_number.begin(), reversed_sequence_of_number.end());

    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] == reversed_sequence_of_number[i])
        {
            std:: cout << "OK" << std:: endl;
        }
        
        else
        {
            std::cout << "Instead of " << array[i] << " here was " << reversed_sequence_of_number[i] << std:: endl;
        }
    }
    
}

int main () {
    int l;
    std::cin >> l;

    std:: vector <int> sequence_of_numbers(l);
    for (int i = 0; i < l; i++)
    {
        std::cin >> sequence_of_numbers[i];
    }

    print_if_numbers_the_same(sequence_of_numbers);
}