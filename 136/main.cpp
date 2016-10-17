#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        map<int, int> mapping;

        for (int i = 0; i < nums.size(); i++)
            if (mapping.find(nums[i]) != mapping.end())
                    mapping.erase(nums[i]);
            else
                mapping[nums[i]] = 1;

        return mapping.begin()->first;

    }
};



int main() {
    vector<int> input = {3, 5, 3};

    Solution a;

    cout << a.singleNumber(input);

    return 0;
}