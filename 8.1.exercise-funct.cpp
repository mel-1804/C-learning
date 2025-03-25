#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// EJERCICIO 1 FUNCIONES - PASAR POR REFERENCIA: crear un procedimiento que intercambie el valor de 2 parámetros

void swap2(int &a, int &b)
{
    int c = b; // c es una variable auxiliar que no esta declarada como parametro. c vale b
    b = a;     // b vale a
    a = c;     // a vale (b)
}

int main()
{
    // Se usa procedimiento creado fuera de la funcion main()
    int x;
    int y;
    cin >> x >> y;
    swap2(x, y);
    cout << x << ' ' << y << endl;
}