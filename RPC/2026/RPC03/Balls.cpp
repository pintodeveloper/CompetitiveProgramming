#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long p, q;
    cin >> p >> q;

    
    for (long long r = 1; r <= 1000000; r++) {

        long long B = p + 2 * q * r;
        long long D = B * B - 8 * p * q * r * r;

        if (D < 0) continue;

        long long raiz = sqrt((long double)D);

        while ((raiz + 1) * (raiz + 1) <= D) raiz++;
        while (raiz * raiz > D) raiz--;

        if (raiz * raiz != D) continue;

        
        long long numerador = B + raiz;
        long long denominador = 2 * p;

        if (numerador % denominador != 0) continue;

        long long n = numerador / denominador;
        long long g = n - r;

        if (g < r) continue;

        if (2 * r * g * q == p * (r + g) * (r + g - 1)) {
            cout << r << " " << g << endl;
            return 0;
        }
    }

    cout << "impossible" << endl;
    return 0;
}