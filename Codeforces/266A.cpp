#include <bits/stdc++.h>

using namespace std;

int main()

{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string word;
    cin>>n>>word;

    int stones = 0;
    for(int i=1; i<word.size();i++){
        if(word[i] == word[i-1]) stones++;
    }

    cout<<stones<<"\n";
    
    return 0;


}