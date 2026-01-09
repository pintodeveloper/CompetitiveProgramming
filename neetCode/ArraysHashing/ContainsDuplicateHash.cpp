#include <bits/stdc++.h>
// O(n log(n))
using namespace std;

bool hasDuplicate(vector<int>&nums){

    return unordered_set<int>(nums.begin(),nums.end()).size() < nums.size();
}


int main(){

    vector<int> nums = {1,2,3,4};
    bool duplicate = hasDuplicate(nums);

    cout<<(duplicate ? "True" : "False")<<"\n";


    return 0;

}

