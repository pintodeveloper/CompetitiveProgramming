#include <bits/stdc++.h>

using namespace std;


int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string ant = "";
    string act = "";
    int magnets =0;
    
    
    for(int i=0; i<n; i++)
    {
        cin>>act;

        if(act != ant){
            magnets++;
        }

        ant = act;

    }

    cout<<magnets<<"\n";


    return 0;
}