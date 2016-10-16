#include <iostream>
#include <vector>
#include <map>

using namespace std;


class Solution {
public:

    vector<int> twoSum(vector<int> &nums, int target) {

        map<int, int> mapping;
        vector<int> ret;

        for (int i = 0; i < nums.size(); i++) {

                mapping[nums[i]] = i;
        };

        for (int i = 0; i < nums.size(); i++){

            int residue = target - nums[i];

            if (mapping.find(residue) != mapping.end() && mapping[residue] != i) {
                ret.push_back(i);
                ret.push_back(mapping[residue]);
                break;
            }
        }

        return ret;

    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;

    vector<int> nums = {3, 2, 4};
    int target = 6;

    Solution a;

    vector<int> ret = a.twoSum(nums, target);

    for (int i = 0; i < ret.size(); i++)
        cout << ret[i] << " ";

    return 0;
}