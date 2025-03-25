#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// EJERCICIO 4 FUNCIONES - RECURSIVE FACTORIAL: escriba una f(x) recursiva que dado un natural n retorna su factorial n!

int factorial_recursivo(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial_recursivo(n - 1);
}

int main()
{
    int a;
    while (cin >> a)
    {
        cout << "el factorial de " << a << " es " << factorial_recursivo(a) << endl;
    }
}