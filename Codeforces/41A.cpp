#include <bits/stdc++.h>

using namespace std;

bool veryWord(string w1, string w2)
{
    if (w1.size() != w2.size()) return false;

    int r = w1.size();

    for (int i = 0; i < w1.size(); i++)


        if (w1[i] != w2[r-1])
        {

            return false;
        }
        else
            r--;

    return true;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    string word1;
    string word2;
    cin >> word1 >> word2;

    bool translation = veryWord(word1, word2);

    cout << (translation ? "YES" : "NO") << "\n";

    return 0;
}