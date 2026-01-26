/*
Given an integer array nums, 
return true if any value appears 
more than once in the array, 
otherwise return false.

[1,2,3,3]


*/

#include <bits/stdc++.h>

using namespace std;




class Solution {
    public:

    bool hasDuplicate(vector<int>& nums){
        int total = 0;
        for(int i=0; i<nums.size(); i++){
            for (int j = i+1; j < nums.size(); j++)
            {
                total++;
                //if(nums[i] == nums[j]) return true;
            }
        }
        cout<<"Count "<<total<<"\n";
        return false;

    }
};


int main()

{
    Solution solution;

    vector<int> nums = {7,7,7,7};

    bool result = solution.hasDuplicate(nums);
    cout << (result ? "True " : "False") << "\n";


    return 0;
}