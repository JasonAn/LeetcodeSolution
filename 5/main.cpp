#include <iostream>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {

        int n = s.size();

        int P[n][n] = {0};

        int ret = 1;
        int start = 0;

        if  (s.size() < 2)
            return s;

        for (int i = 0; i < n ; i++) {
            for (int j = 0; j < i; j++) {
                if (j < (i - 1))
                    P[j][i] = (P[j + 1][i - 1] && s[j] == s[i]);
                else
                    P[j][i] = (s[i] == s[j]);

                if (P[j][i] == 1 and ret < (i - j + 1)) {
                    start = j;
                    ret = i - j + 1;
                }

            }

            P[i][i] = 1;

        }

//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++)
//                cout << P[j][i] << " ";
//            cout << endl;
//        }

        return s.substr(start, ret);

    }
};

int main() {

    Solution a;

    cout << a.longestPalindrome("abcda");

    return 0;
}