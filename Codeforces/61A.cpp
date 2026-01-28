#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    string one,two;
    cin>>one>>two;


    string number = "";

    for (int i = 0; i <one.size(); i++){
        if(one[i]==two[i]) number+="0";
        else number += "1"; 
    }

    cout<<number<<"\n";

    return 0;
}