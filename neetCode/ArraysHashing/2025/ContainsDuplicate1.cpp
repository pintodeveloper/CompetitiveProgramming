#include <bits/stdc++.h>

using namespace std;

bool hasDuplicate(vector<int>&nums){
    unordered_set<int> mapSet;

    for(auto i: nums){
        if(mapSet.count(i)) return true;
        mapSet.insert(i);
    }

    return false;

}


int main(){

    vector<int> nums = {1,2,3,4};
    bool duplicate = hasDuplicate(nums);

    cout<<(duplicate ? "True" : "False")<<"\n";


    return 0;

}

