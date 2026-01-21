#include <bits/stdc++.h>

using namespace std;

string veryQueue(string word, int time)
{


    while (time)
    {

        for (int i = 0; i < word.size() - 1; i++)
        {
            if (word[i] == 'B' && word[i + 1] == 'G')
            {
                word[i] = 'G';
                word[i + 1] = 'B';
                i++;
            }
        }

        time--;
    }

    return word;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t;
    string word;

    cin >> n >> t;
    cin >> word;

    string output = veryQueue(word, t);
    cout << output << "\n";

    return 0;
}