#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    int sum(vector<int> combination)
    {
        int res = 0;
        for (auto i : combination)
            res += i;
        return res;
    }
    void helper(vector<int> &combination, int n, int k, int currentNum)
    {
        // base case 
        if (k == 0)
        {
            if (sum(combination) == n)
                ans.push_back(combination);
            return ;
        }

        // base case
        if (currentNum > 9)
            return ;

        // include the currentNum in combination
        combination.push_back(currentNum);
        helper(combination, n, k - 1, currentNum + 1);

        // exclude the currentNum in the combination
        combination.pop_back();
        helper(combination, n, k, currentNum + 1);

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> combination;
        helper(combination, n, k, 1);
        return ans;
    }
};

int main()
{
    
    return 0;
}