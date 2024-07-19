#include <iostream>
#include <vector>
#include <algorithm>

bool is_prime (int i) {
    if ((i % 2 == 0 and i != 2) or i == 0 or i == 1)
    {
        return false;
    }
    else
    {
        for (int j = 3; j < (i / 2) + 1; j += 2)
        {
            if (i % j == 0)
            {
                return false;
                break;
            }
        }
    }
    return true;
}

int count_of_prime (std:: vector <int> array_of_numbers) {
    return std:: count_if(array_of_numbers.begin(), array_of_numbers.end(), is_prime);
}

int main () {
    int l;
    std:: cin >> l;
    std:: vector <int> integers(l);

    for (int i = 0; i < l; i++)
    {
        int temp;
        std:: cin >> temp;
        integers[i] = abs(temp);
    }
    
    std::cout << count_of_prime(integers);
    return 0;
}