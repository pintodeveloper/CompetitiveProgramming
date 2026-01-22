#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,p,q,roomCanMoveIn=0;

    cin>>n;

    

    for(int i=0; i<n; i++)
    {
        cin>>p>>q;

        if(p<q && q-p >= 2) roomCanMoveIn++;

    }

    cout<<roomCanMoveIn<<"\n";

    return 0;
}