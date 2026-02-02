#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());

    int posMax = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mx)
        {
            posMax = i;
            break;
        }
    }

    int posMin = n - 1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == mn)
        {
            posMin = i;
            break;
        }
    }

    int res = posMax + (n - 1 - posMin);

    if (posMax > posMin) res--;


    cout << res << "\n";

    return 0;
}