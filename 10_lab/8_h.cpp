#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
 
int main()
{
    int l;
    std:: cin >> l;
    std::vector <int> array;
    for (int i = 0; i < l; i++)
    {
        int temp;
        std:: cin >> temp;
        if (std:: find(array.begin(), array.end(), temp) == array.end())
        {
            array.push_back(temp);
        }
    }


    if (array.size() != 1)
    {
            for (auto &&i : array)
        {
            std:: cout << i << ' ';
        }
        std:: cout << std:: endl; 



        while (std::next_permutation(array.begin(), array.end()))
        {
            for (auto &&i : array)
            {
                std:: cout << i << ' ';
            }
            std:: cout << std:: endl;  
        }
    }

    else
    {
        std:: cout << array[0];   
    }


    return 0;
}