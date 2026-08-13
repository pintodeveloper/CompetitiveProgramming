#include <bits/stdc++.h>

using namespace std;


int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin>>n;


    string word; 

    for(int i=0; i<n; i++){
        cin>>word;

        if(word.size() >= 10){
            word = word.front() + to_string(word.size() - 2) + word.back();
            cout<<word<<"\n";
        }else{
            cout<<word<<"\n";
        }


    }


    return 0;
}
