#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n1, n2;
    cin >> n1 >> n2;

    /*

    9 9
    #########
    ........#
    #########
    #........
    #########
    ........#
    #########
    #........
    #########

    */

    string output = "";

    bool rever = true;

    for (int i = 1; i <= n1; i++)
    {
        if (i % 2 == 0)
        {
            if (rever)
            {
                for (int j = 0; j < n2 - 1; j++)
                {
                    output += ".";
                }
                output += "#";
            }else{
                output += "#";
                for(int j= n2-1; j>0;j--){
                    output += ".";
                }
            }
            rever = !rever;

        }
        else
        {

            for (int j = 0; j < n2; j++)
            {
                output += "#";
            }
        }

        cout << output << "\n";

        output = "";
    }

    return 0;
}