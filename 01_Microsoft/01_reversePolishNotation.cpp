#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isOperator(string s)
    {
        return (s == "+" or s == "-" or s == "*" or s == "/") ? true : false;
    }
    void evaluate(string op, stack<long long int> &res)
    {
        if (op == "+")
        {
            long long int a = res.top();
            res.pop();

            long int b = res.top();
            res.pop();
            res.push(b + a);
        }

        else if (op == "-")
        {
            long long int a = res.top();
            res.pop();

            long long int b = res.top();
            res.pop();

            res.push(b - a);
        }

        else if (op == "*")
        {
            long long int a = res.top();
            res.pop();

            long long int b = res.top();
            res.pop();

            res.push(b * a);
        }

        else
        {
            long long int a = res.top();
            res.pop();

            long long int b = res.top();
            res.pop();

            res.push(b / a);
        }
    }
    int evalRPN(vector<string>& tokens) {
        stack<long long int> res;
        for (string &s : tokens)
        {
            if (isOperator(s))
                evaluate(s, res);
            else
                res.push(stoi(s));
        }
        return res.top();
    }
};

int main()
{
    
    return 0;
}