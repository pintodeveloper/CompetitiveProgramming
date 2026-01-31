#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    set<char> letras;

    for (char c : s) {
        letras.insert(tolower(c));
    }

    cout << (letras.size() == 26 ? "YES" : "NO");
    return 0;
}
