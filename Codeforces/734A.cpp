#include <bits/stdc++.h>


using namespace std;


int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int number;
    string numberGames;
    cin>>number;
    cin>>numberGames;

    int a=0,d=0;
    for(auto j: numberGames ){
        if(j == 'A') a++;
        else d++;
    }

    if(a>d)cout<<"Anton"<<"\n";
    else if(a<d) cout<<"Danik"<<"\n";
    else cout<<"Friendship"<<"\n";


    return 0;
}