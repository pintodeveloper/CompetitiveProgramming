#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    int nextRound = 0;

    cin >> n >> k;

    vector<int> nPeople;

    int number = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> number;
        nPeople.push_back(number);
    }

    int index = nPeople[k-1];

    if (index == 0)
    {
        for (auto i : nPeople)
        {
            if (i > index)
                nextRound++;
        }
    }else{
        for(auto i: nPeople){
            if(i>= index){
                nextRound++;
            }
        }
    }

    cout << nextRound << "\n";

    return 0;
}