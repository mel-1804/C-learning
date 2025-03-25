#include <iostream>
#include <vector>
using namespace std;

// ELEMENTO IDENTICO: contruya un programa que lea una secuencia de nros enteros y diga cuantos de ellos son iguales que el último (este último excluido de la cuenta).

int main()
{
    int n;
    cout << "Ingrese el tamano del vector:" << endl;
    cin >> n;
    vector<int> sun(n);
    cout << "Ingrese los valores del vector:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> sun[i];
    }
    int contador = 0;
    for (int j = 0; j < n - 1; j++)
    {
        if (sun[j] == sun[n - 1])
            contador++;
    }

    cout << "El numero de elementos iguales al ultimo es: " << contador << endl;
}