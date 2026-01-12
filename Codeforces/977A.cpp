#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number,divition;
    cin>>number>>divition;


    while(divition !=0){

        if(number%10 == 0) number/=10;
        else number -= 1;

        divition--;
    }

    cout<<number<<"\n";


    return 0;
}