#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;

    int output = 0;

    if(n1 == n2 || n1 == n3 || n1 == n4 ) output++;

    if(n2 == n3 || n2 == n4) output++;

    if(n3 == n4) output++;

    cout<<output<<"\n";






    return 0;
}