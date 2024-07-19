#include <iostream>
#include <vector>
#include <algorithm>

long long int gen()
{
    static long long int i = 0;
    i++;
    long long int result = 1;
    for (int j = 0; j < i; j++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<long long int> v1(n);

    std::generate(v1.begin(), v1.end(), gen);

    std::cout << 1 << ' ';
    for (const auto &val : v1)
    {
        std::cout << val << " ";
    }

    return 0;
}