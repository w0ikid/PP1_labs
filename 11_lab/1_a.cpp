#include <iostream>
#include <map>

int main () {
    std:: string day;
    std:: cin >> day;
    std:: map <std:: string, int> days_untill_the_sunday {
        {"SUN", 7}, {"MON", 6}, {"TUE", 5}, {"WED", 4}, {"THU", 3}, {"FRI", 2}, {"SAT", 1}
    };

    std:: cout << days_untill_the_sunday[day];

    return 0;
}