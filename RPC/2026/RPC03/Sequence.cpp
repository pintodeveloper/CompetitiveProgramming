#include <iostream>
#include <numeric>
using namespace std;

int main() {

    long long n;
    cin >> n;

    // Búsqueda binaria del bloque k
    long long low = 1, high = 1;
    while (high * (high + 1) / 2 < n) {
        high *= 2;
    }

    while (low < high) {
        long long mid = (low + high) / 2;
        if (mid * (mid + 1) / 2 >= n)
            high = mid;
        else
            low = mid + 1;
    }

    long long k = low;

    // Elementos antes del bloque k
    long long prev = (k - 1) * k / 2;

    // Posición dentro del bloque
    long long p = n - prev;

    long long num = p - 1;
    long long den = k;

    if (num == 0) {
        cout << k << "\n";
    } else {
        long long g = gcd(num, den);
        num /= g;
        den /= g;
        cout << k << " " << num << "/" << den << "\n";
    }

    return 0;
}