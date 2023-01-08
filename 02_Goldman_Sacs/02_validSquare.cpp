#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calculateDistance(vector<int> &p1, vector<int> &p2)
    {
        return (p1[0] - p2[0]) * (p1[0] - p2[0]) + (p1[1] - p2[1]) * (p1[1] - p2[1]);
    }
    bool validSquare(vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d) {
        unordered_set<int> distances;
        // calculate distance with between pairs of all points
        distances.insert(calculateDistance(a, b));
        distances.insert(calculateDistance(b, c));
        distances.insert(calculateDistance(c, d));
        distances.insert(calculateDistance(d, a));
        distances.insert(calculateDistance(a, c));
        distances.insert(calculateDistance(b, d));

        return !distances.count(0) and distances.size() == 2;
    }
};

int main()
{
    
    return 0;
}