#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        map<int, int> mappings, mappingt;

        if (s.size() != t.size())
            return false;

        for (int i = 0; i < s.size(); i++) {
            int j = int(s[i] - 'a');
            if (mappings.find(j) == mappings.end())
                mappings[j] = 1;
            else
                mappings[j] += 1;
        }

        for (int i = 0; i < t.size(); i++) {
            int j = int(t[i] - 'a');
            if (mappingt.find(j) == mappingt.end())
                mappingt[j] = 1;
            else
                mappingt[j] += 1;
        }

        map<int, int>::iterator i = mappings.begin();
        map<int, int>::iterator j = mappingt.begin();

//        while(i != mappings.end()) {
//            cout << i->first << " " << i->second << "       " <<  j->first << " " << j->second << endl;
//            i++;
//            j++;
//        }

        while(i != mappings.end()) {
            if (mappingt.find(i->first)->second != i->second)
                return false;
            i++;
            j++;
        }

        return true;
    }
};

int main() {

    string s = "anagram";
    string t = "nagaram";
    Solution a;

    cout << a.isAnagram(s, t);

    return 0;
}