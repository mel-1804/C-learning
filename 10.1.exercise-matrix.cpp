#include <iostream>
#include <vector>
using namespace std;

// ESCRIBA UNA FUNCIÓN BOOLEANA DE LA FORMA bool is_diagonal_matrix(const Matrix& m) QUE DEVUELVA VERDAERO SI LA MATRIZ ES DIAGONAL Y FALSO EN CASO CONTRARIO.
// UTILICE LA DEFINICIÓN typedef vector<vector< int>> Matrix;

typedef vector<vector<int>> Matrix;

bool is_diagonal_matrix(const Matrix &m)
{
    int n = m.size();
    for (int i = 0; i < n; i++)
    { // i representa las filas
        for (int j = 0; j < n; j++)
        { // j representa las columnas
            if (i != j and m[i][j] != 0)
            {                 // si i es diferente de j y m[i][j] es diferente de 0
                return false; // entonces no es una matriz diagonal
            }
        }
    }
    return true; // si no se cumple la condición anterior, entonces es una matriz diagonal
}

int main()
{
    int tamano_matriz = 3;
    Matrix south(tamano_matriz, vector<int>(tamano_matriz)); // matriz cuadratica 3x3

    for (int i = 0; i < tamano_matriz; i++) // leo matriz 3x3
    {
        for (int j = 0; j < tamano_matriz; j++)
        {
            cin >> south[i][j];
        }
    }

    if (is_diagonal_matrix(south) == true)
        cout << "La matriz es diagonal";
    else
        cout << "La matriz no es diagonal";
    cout << endl;
}