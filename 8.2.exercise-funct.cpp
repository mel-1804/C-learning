#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// EJERCICIO 2 FUNCIONES -  TIME DESCOMPOSITION: crear un procedimiento que reciba un nro n en segundos para descomponer en formato HH:MM:SS

void decompose(int n, int &h, int &m, int &s)
{
    h = n / 3600;
    m = (n % 3600) / 60;
    s = (n % 3600) % 60;
}

int main()
{
    int n;
    cin >> n;
    int h, m, s;
    decompose(n, h, m, s);
    cout << h << ':' << m << ':' << s << endl;
}