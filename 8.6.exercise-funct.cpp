#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// EJERCICIO 6 FUNCIONES - FATTEN NUMBERS: escriba una funcion recursiva que dado cualquier nro natural con x digitos engrose los digitos basandose en la comparacion entre digitos (debe cambiar el digito menor por el mayor contra el cual se compara)

double maximo(double a, double b)
{
    if (a > b)
        return a;
    else
        return b;
}

int fatten(int x)
{
    if (x < 10)
        return x;
    else
    {
        int n = x % 10;
        int fn = fatten(x / 10) % 10;
        int valor_mayor = maximo(n, fn);
        return 10 * fatten(x / 10) + valor_mayor;
    }
}

int main()
{
    int x;
    while (cin >> x)
    {
        cout << "El numeor engrosado es " << fatten(x) << endl;
    }
}