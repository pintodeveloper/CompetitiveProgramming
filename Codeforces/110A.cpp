#include <bits/stdc++.h>

using namespace std;

//4744000695826

bool verifyNumberTheLucky(string number)
{
   
    int numberLucky = 0;

    if (number.size() < 4)
        return false;


    for (char n : number)
    {
        
        if (n == '7' || n == '4')
        {
            numberLucky++;
  
        }
    }

    if(numberLucky == 4 || numberLucky == 7) return true;

    return false;
}

// 4744000695826 YES
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long number;
    cin >> number;

    string newNumber = "";

    newNumber = to_string(number);



    bool lucky = verifyNumberTheLucky(newNumber);

    if (lucky)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}