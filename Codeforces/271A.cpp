#include <bits/stdc++.h>
using namespace std;

bool hasDistinctDigits(int year) {
    unordered_set<int> digits;

    while (year > 0) {
        int digit = year % 10;
        if (digits.count(digit)) {
            return false;
        }
        digits.insert(digit);
        year /= 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int year;
    cin >> year;

    while (true) {
        year++;
        if (hasDistinctDigits(year)) {
            cout << year << '\n';
            break;
        }
    }

    return 0;
}
