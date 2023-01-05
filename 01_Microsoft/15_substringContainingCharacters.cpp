#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string s) {
        int count[3] = {0, 0, 0};
        int res = 0;
        int include = 0;

        for (int i = 0; i < s.length(); ++i)
        {
            count[s[i] - 'a']++;
            while (count[0] and count[1] and count[2])
                count[s[include++] - 'a']--;
            res += include;
         }

         return res;
    }
};

int main()
{
    
    return 0;
}