#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Almat_and_xor (vector<int> mid_or_feed) {
    int Jokerge = 0;
    for (int i = 0; i < mid_or_feed.size(); i++)
    {
        for (int j = 0; j < mid_or_feed.size(); j++)
        {
            if (j > i and find(mid_or_feed.begin(), mid_or_feed.end(), mid_or_feed[i] xor mid_or_feed[j]) != mid_or_feed.end())
            {
                Jokerge++;
            }
        }
    }

    return Jokerge;
}

int main () {
    int l;
    cin >> l;
    vector<int> Gandonkerge(l);
    for (int i = 0; i < l; i++)
    {
        cin >> Gandonkerge[i];
    }

    cout << Almat_and_xor(Gandonkerge);

    return 0;
}