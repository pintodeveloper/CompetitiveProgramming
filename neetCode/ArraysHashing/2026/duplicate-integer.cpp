#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    bool hasDuplicate(const vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }

        return false;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 3};

    bool output = solution.hasDuplicate(nums);
    cout << boolalpha << output << '\n';

    return 0;
}
