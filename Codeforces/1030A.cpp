#include <bits/stdc++.h>

using namespace std;

bool veryProblem(int n){

    int v;
    bool difficulty = true;
    for(int i=0; i<n;i++){
        cin>>v;
        if(v == 1) difficulty = false;
    }

    return difficulty;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    int n;
    vector<int> people;
    cin>>n;

    bool output = veryProblem(n);

    cout<<(output ? "EASY" : "HARD")<<"\n";
    return 0;
}