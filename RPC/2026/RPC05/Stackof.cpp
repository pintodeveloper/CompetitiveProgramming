#include <bits/stdc++.h>
using namespace std;

int main() {
    long long w, s;
    cin >> w >> s;

    long long monedas = s * (s + 1) / 2;
    long long peso_base = monedas * 29260;

    long long respuesta = (w - peso_base) / 110;

    cout << respuesta << '\n';

    return 0;
}