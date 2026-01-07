#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int indexRow=-1, indexColumn=-1;

    int n;

    for (int i=0; i<5; i++){
        for(int j=0; j<5;j++){
            cin>>n;
            if(n==1){
                indexRow = i;
                indexColumn = j;
            }
        }
    }

    int distance = abs(2-indexRow) + abs(2-indexColumn);

    cout<<distance<<"\n";








    return 0;
}