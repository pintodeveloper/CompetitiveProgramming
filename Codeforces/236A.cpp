#include <bits/stdc++.h>


using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    //wjmzbmr -> par 
    //xiaodao --> impar
    //sevenkplus -> par

    set<char> character;

    string word;
    cin>>word;

    for(auto c: word){
        character.insert(c);
    }

    if(character.size() % 2 ==0 )
    cout<<"CHAT WITH HER!"<<"\n";
    else cout<<"IGNORE HIM!"<<"\n";

    return 0;
}