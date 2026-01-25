/*
La ecuacion del numero triangular
k(k+1)/2 =n

solo basta con despejar K
k(k + 1) = 2n
k^2 + k = 2n
k^2 + k − 2n = 0

Es importante recordar que la fórmula de la cuadrática para obtener las raíces de un polinomio
de grado 2


##########
¿Qué es un número triangular?

Un número triangular es el resultado de sumar los primeros números naturales:

1,1+2, 1+2+3, 1+2+3+4, ...
k       numero triangular
1           1
2           3
3           6
4           10
5           15
6           21

la fomula general es: n = k(k+1)/2

solo es despejar

2n = k(k+1)

2n = k^2 + k
k^2 + k - 2n = 0

usamos la ecuacion ax^2 + ax +c =0

formula cuadratica

*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned long long n;
    
    while (cin >> n && n > 0) {
        // Calcular k usando la fórmula inversa del número triangular
        unsigned long long k = (-1 + (unsigned long long)sqrt(1 + 8 * (double)n)) / 2;
        unsigned long long kplus1 = k + 1;
        
        // Calcular k * (k+1) / 2 de forma segura
        if (k % 2 == 0) 
            k /= 2;
        else 
            kplus1 /= 2;
        
        unsigned long long triangular = k * kplus1;
        
        if (triangular == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}