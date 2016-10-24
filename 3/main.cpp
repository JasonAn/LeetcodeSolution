#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        map<char, int> mapping;
        int ret = 0;
        int len;

        if (s.size() < 2)
            return s.size();

        string::iterator ptr1, ptr2;
        ptr1 = s.begin();
        ptr2 = ptr1 + 1;

        mapping[s[0]] = 0;

        while (ptr1 != s.end() && ptr2 != s.end()) {
            if (mapping.find(*ptr2) == mapping.end()) {
                mapping[*ptr2] = mapping.size();
                ptr2++;

            } else {
                mapping.erase(*ptr1);
                ptr1++;
            }

            len = distance(ptr1, ptr2);
            ret = max(ret, len);
        }

    return ret;

    }

};


int main() {

    Solution a;
    cout << a.lengthOfLongestSubstring("c");

    return 0;
}