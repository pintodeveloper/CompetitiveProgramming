#include <bits/stdc++.h>

using namespace std;

int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0);

    int k,n,w;
    cin>>k>>n>>w;

    /*
    operations

    3 17 4
    k n w

    soldiers wants to buy w bananas -> 4
    he has to pay 1K,2k,3k,4k,5k
    he has n dollars;

    he have to borrow from his friend soldier to buy w

    3k , 2*3k , 3 *3k, 4 *3k = 3 + 6 + 9 + 12 = 30 - 17 
    
    */
   int borrowFriend = 0;

    for(int i=1; i < w+1; i++){

        borrowFriend += k*i; 
    }
    
    //validate negatives

    borrowFriend -= n; 
    
    if(borrowFriend < 1) borrowFriend = 0;
    
    cout<<borrowFriend<<"\n";





    return 0;
}