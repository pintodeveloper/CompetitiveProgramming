#include <bits/stdc++.h>

using namespace std;

void modificateWord(string word)
{

    


    string newWord = "";
    int lower = 0;
    int upper = 0;

    for (auto c : word)
    {
        if (c == toupper(c))
            upper++;
        else
            lower++;
    }

    if (upper > lower)
        for (auto c : word) newWord += toupper(c);
    else
        for (auto c : word) newWord += tolower(c);

    cout<<newWord<<"\n";
}

int main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string word;
    cin >> word;

    modificateWord(word);

 

    return 0;
}