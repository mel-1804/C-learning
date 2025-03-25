#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// EJERCICIO 3 FUNCIONES - ITERATIVE FACTORIAL: escriba una f(x) iterativa que dado un natural n retorna su factorial n!

int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int a;
    while (cin >> a)
    {
        cout << factorial(a) << endl;
    }
}