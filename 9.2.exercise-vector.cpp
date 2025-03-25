#include <iostream>
#include <vector>
using namespace std;

// VECTOR REVERSO: contruya un programa que lea una secuencia de nros enteros e imprima cada uno revirtiendo el orden de los elementos (son varias secuencias).

int main()
{
    int n;
    cout << "Ingrese el nro de elementos:" << endl;
    while (cin >> n)
    {
        vector<int> sec(n);
        cout << "Ingrese los valores de la secuencia:" << endl;
        for (int i = 0; i < n; i++)
        { // aca lleno los vectores o secuencias
            cin >> sec[i];
        }
        for (int j = n - 1; j >= 0; j--)
        { // aca los imprimo al reves
            if (j != 0)
                cout << sec[j] << " ";
            else
                cout << sec[j];
        }
        cout << endl;
    }
}