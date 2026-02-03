#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin>>n;


    int bills = 0;

    int denominations[] = {100, 20, 10, 5, 1};

    for(int d: denominations){
        bills += n / d;
        cout<<"Este es el valor de Bills"<<bills<<"\n";
        // bills += 43 / 100
        n%=d;
    }

    cout<<bills << "\n";



    return 0;
}