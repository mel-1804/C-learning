#include <iostream>
#include <vector>
using namespace std;

// HACER UNA MATRIZ Y QUE EL PROGRAMA LA IMPRIMA

int main()
{
    int f, c;      // SE DECLARAN LAS FILAS Y COLUMNAS
    cin >> f >> c; // SE INGRESAN LAS FILAS Y COLUMNAS
    vector<vector<int>> Matriz(f, vector<int>(c));

    for (int i = 0; i < f; i++) // bucle para escribir la matriz
    {
        for (int j = 0; j < c; j++)
        {
            cin >> Matriz[i][j];
        }
    }

    for (int i = 0; i < f; i++) // bucle para imprimir la matriz
    {
        for (int j = 0; j < c; j++)
        {
            cout << Matriz[i][j] << " ";
            if (j == c - 1)
                cout << endl;
        }
    }
}
