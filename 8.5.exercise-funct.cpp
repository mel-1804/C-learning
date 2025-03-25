#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// EJERCICIO 5 FUNCIONES - DISTANCIA AL ORIGEN: construya una f(x) con parametros x e y que retornara la distancia al origen (0,0) desde el punto x,y

double dist_orig(double x, double y)
{
    double d = sqrt(pow(x, 2) + pow(y, 2));
    return d;
}
int maximo(int a, int b)
{
    if (a < b)
        return b;
    else
        return a;
}

int main()
{
    double x, y;
    while (cin >> x >> y)
    {
        cout << "la distancia al origen es " << dist_orig(x, y) << endl;
    }
}