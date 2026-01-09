#include <bits/stdc++.h>
// O(n log(n))
using namespace std;

bool hasDuplicate(vector<int>&nums){
   
    sort(nums.begin(),nums.end());

    for(int i=1; i<nums.size(); i++){
        if(nums[i] == nums[i-1]) return true;
    }

    return false;

}


int main(){

    vector<int> nums = {1,2,3,4};
    bool duplicate = hasDuplicate(nums);

    cout<<(duplicate ? "True" : "False")<<"\n";


    return 0;

}

