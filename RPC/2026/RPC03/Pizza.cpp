#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sumS = 0, sumM = 0, sumL = 0;

    for (int i = 0; i < n; i++) {
        char s;
        int l;
        cin >> s >> l;

        if (s == 'S') sumS += l;
        else if (s == 'M') sumM += l;
        else sumL += l; // s == 'L'
    }

    int boxS = (sumS + 5) / 6;
    int boxM = (sumM + 7) / 8;
    int boxL = (sumL + 11) / 12;

    cout << boxS + boxM + boxL << endl;

    return 0;
}