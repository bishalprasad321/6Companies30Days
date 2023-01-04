#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int> guessCount(10, 0);
        vector<int> secretCount(10, 0);
        int x = 0, y = 0;
        
        if (secret.size() != guess.size() or secret.empty())
            return "0A0B";

        for (int i = 0; i < secret.length(); ++i)
        {
            // case - When both numbers are in position same
            if (secret[i] == guess[i])
                x++;

            // else count and store in their count arrays
            else
            {
                guessCount[guess[i] - '0']++;
                secretCount[secret[i] - '0']++;
            }
        }

        // count the y
        for (int i = 0; i < 10; i++)
            y += min(secretCount[i], guessCount[i]);
        
        return to_string(x) + "A" + to_string(y) + "B";
    }
};

int main()
{
    
    return 0;
}