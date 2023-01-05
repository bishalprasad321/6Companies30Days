#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        // find the greatest common divisor of all the elements of numsDivide
        int divisor = numsDivide[0];
        for (int i = 0; i < numsDivide.size() - 1; ++i)
            divisor = __gcd(divisor, __gcd(numsDivide[i], numsDivide[i + 1]));

        // sort the nums in increasing order
        sort(nums.begin(), nums.end());

        // Check in nums, which numbers can divide the greatest common divisor
        int deletions = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (divisor % nums[i] == 0)
                break;
            deletions++;
        }

        if (deletions == nums.size())
            return -1;
        else
            return deletions;
    }
};

int main()
{
    
    return 0;
}