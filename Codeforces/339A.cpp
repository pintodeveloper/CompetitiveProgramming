// 3+2+1
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string word;
    cin >> word;

    string newWord = "";

    sort(word.begin(), word.end());

    for(auto c: word){
        if(c != '+'){
            newWord.push_back(c);
        }
    }

    vector<string> v;
    string output = "";


    for(int i=0; i<newWord.size(); i++){
        if(i == newWord.size()-1){
            cout<<newWord[i];
        }else{
            cout<<newWord[i]<<"+";
        }
    }
    
    return 0;
}
