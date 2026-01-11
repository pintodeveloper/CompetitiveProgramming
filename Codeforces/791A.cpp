#include <bits/stdc++.h>


using namespace std;

int verifyAgeBrother(int limak, int bob){
    int largestOfBears = 0;

    if(limak == bob) return 1;

    while(limak <= bob){
        limak *=3;
        bob*=2;
        largestOfBears++;
    }

    return largestOfBears;
}

int main()
{
    int yearsLimak = 0;
    int yearsBob = 0;

    cin>>yearsLimak;
    cin>>yearsBob;

    int output = verifyAgeBrother(yearsLimak,yearsBob);

    cout<<output<<"\n";


    return 0;
}

