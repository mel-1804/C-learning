#include <iostream>
#include <vector>
using namespace std;

// VALOR MINIMO DE UN VECTOR: contruya un programa que dado un vector de enteros, de tamaño cualquiera introducida por el usuario, nos escriba en pantalla el valor minimo.

int main()
{
    int n;
    cout << "ingrese el tamaño del vector:" << endl;
    cin >> n;

    vector<int> voice(n);

    cout << "ingrese los valores del vector:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> voice[i];
    }

    int min = voice[0];
    for (int j = 0; j < n; j++)
    {
        if (voice[j] < min)
            min = voice[j];
    }
    cout << "El valor minimo es: " << min << endl;
}