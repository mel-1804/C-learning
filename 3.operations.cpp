#include <iostream>
#include <string>
using namespace std;

// OPERADORES Y SENTENCIAS.......................................................
// suma: +
// resta: -
// multiplicación: *
// división: /
// módulo: %

int main()
{
    // EJEMPLO SUMA:
    int a;
    int b;
    cin >> a >> b;
    cout << a + b << endl;

    // EJEMPLO MULTIPLICACION:
    double a;
    double b;
    cin >> a >> b;
    cout << "la multiplicacion es " << a * b << endl;

    // EJEMPLO DIVISIÓN:
    double numerador;
    double denominador;
    cin >> numerador >> denominador;
    cout << "El resultado de dividir " << numerador << " entre " << denominador << " es " << numerador / denominador << endl;

    // EJEMPLO MODULO:
    int n;
    cin >> n;
    int restador;
    cin >> restador;
    cout << n % restador << endl;
}