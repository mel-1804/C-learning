#include <iostream>
#include <string>
using namespace std;

// STRING Y GETLINE..........................................................
// Cuando queremos introducir un texto en consola que el programa lo replique debemos usar getline, previamente instalar <string>, para que imprima el textocompleto, de lo cotrario imprimirá sólo la primera palabra.
// La estructura de getline es:
// getline(cin, variable)

int main()
{
    string a;
    getline(cin, a);
    cout << a << endl;
}