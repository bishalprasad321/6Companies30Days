#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        int factor = 5;
        int zeroes = 0;
        while ((n / factor) > 0)
        {
            zeroes += (n / factor);
            factor *= 5;
        }
        return zeroes;
    }
};

int main()
{
    
    return 0;
}