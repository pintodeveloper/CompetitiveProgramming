/*
3 7 
4 5 14
4

numberFriends = 3

4 + 5 + 14
1   1   

*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()

{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int numberFriend,height;
    cin>>numberFriend>>height;

    vector<int> friends;

    int widthMin = 0;

    int n;

    for(int i=0; i<numberFriend;i++){
        cin>>n;
        friends.push_back(n);
    }

    for(auto f: friends){
        if(f>height)widthMin +=2;
        else widthMin++;
    }

    cout<<widthMin<<"\n";




    return 0;
}