#include <bits/stdc++.h>

using namespace std;


int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    set<int> leves;

    int x,y;

    int p;
    cin>>p;

    for(int i=0; i<p; i++){
        int x;
        cin>>x;
        leves.insert(x);
    }

    int q;
    cin>>q;
    for(int i=0; i<q; i++){
        int y;
        cin>>y;
        leves.insert(y);
    }

    if((int)leves.size() == n)
        cout<<"I become the guy.\n";
    else
        cout<<"Oh, my keyboard!\n";

    return 0;
}