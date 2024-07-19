#include <iostream>
#include <vector>


std:: vector <int> solution (int lenght) {
    std:: vector <int> result;
    for (int i = 1; i <= lenght; i++)
    {
        std:: vector <int> temp_vector_of_numbers;
        for (int j = 1; j <= i; j++)
        {
            temp_vector_of_numbers.push_back(i);
        }
        result.insert(result.end(), temp_vector_of_numbers.begin(), temp_vector_of_numbers.end());
    }
    
    return result;
}

int main () {
    int l;
    std:: cin >> l;

    std:: vector <int> result = solution(l);
    
    for (auto &&i : result)
    {
        std:: cout << i << ' ';
    }
    
    return 0;
}