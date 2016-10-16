#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack <char> stk;
        size_t size = s.size();

        char token;

        for (int i = 0; i < size; i++)
        {
            token = s[i];

            if (token == '(' || token == '[' || token =='{')
                stk.push(token);

            else if (token == ')'){
                if (stk.size() == 0 || stk.top() != '(' )
                    return false;
                else
                    stk.pop();
            }

             if (token == ']'){
                if (stk.size() == 0 || stk.top() != '[' )
                    return false;
                else
                    stk.pop();
            }

            else if (token == '}'){
                if (stk.size() == 0 ||stk.top() != '{' )
                    return false;
                else
                    stk.pop();
            }

        }

        return stk.size() <= 0;

    }
};


int main() {
    string s = "]";

    Solution ans;
    cout << ans.isValid(s);

    return 0;
}