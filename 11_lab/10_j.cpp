#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>

std:: vector <std:: pair <std:: pair <int, int>, double>> closest_point (std:: vector <std:: pair <int, int>> points_on_the_space, std:: pair <int, int> start_point) {
    std:: vector <std:: pair <std:: pair <int, int>, double>> distance_between_points;
    for (auto &&i : points_on_the_space)
    {
        double distance = sqrt(powl(i.first - start_point.first, 2) + powl(i.second - start_point.second, 2));
        distance_between_points.push_back(std:: make_pair(i, distance));
    }
    
    std:: sort(distance_between_points.begin(), distance_between_points.end(), [](const std:: pair <std:: pair <int, int>, double>& a, const std:: pair <std:: pair <int, int>, double>& b)
        {return a.second < b.second; });

    return distance_between_points;
}

int main () {
    std:: pair <int, int> start_point;
    int x, y;
    std:: cin >> x >> y;
    start_point = std:: make_pair(x, y);

    int l;
    std:: cin >> l;
    std:: vector <std:: pair <int, int>> points_on_the_space(l);
    for (auto &&i : points_on_the_space)
    {
        int a, b;
        std:: cin >> a >> b;
        i = std:: make_pair(a, b);
    }

    std:: vector <std:: pair <std:: pair <int, int>, double>> result = closest_point(points_on_the_space, start_point);
    
    for (auto &&i : result)
    {
        std:: cout << i.first.first << ' ' << i.first.second << std:: endl;
    }
    
    return 0;
}