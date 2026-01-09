/*
Given an integer array nums, 
return true if any value appears 
more than once in the array, 
otherwise return false.
*/

#include <bits/stdc++.h>

using namespace std;




class Solution {
    public:
    bool hasDuplicate(vector<int>& nums){

        for(int i=0; i<nums.size(); i++){
            for (int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] == nums[j]) return true;
            }
        }

        return false;

    }
};


int main()

{
    Solution solution;

    vector<int> nums = {1,2,3,4};

    bool result = solution.hasDuplicate(nums);
    cout << (result ? "True " : "False") << "\n";


    return 0;
}