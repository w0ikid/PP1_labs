#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> unique_elements_set (vector<string> array) {
    vector<string> elements;
    for (string to_be_found : array)
    {
        if (find(elements.begin(), elements.end(), to_be_found) == elements.end())
        {
            elements.push_back(to_be_found);
        }
    }
    
    return elements;
}

int count_of_elements_more_than_3 (vector<string> array, vector<string> contacts) {
    int Jokerge = 0;
    for (string elem : contacts)
    {
        if (count(array.begin(), array.end(), elem) == 3)
        {
            Jokerge++;
        }
    }
    
    return Jokerge;
}

int main () {
    int l;
    cin >> l;
    vector<string> array(l);
    for (int i = 0; i < l; i++)
    {
        cin >> array[i];
    }
    
    vector<string> unique_contacts = unique_elements_set(array);
    cout << count_of_elements_more_than_3(array, unique_contacts);

    return 0;
}