#include <vector>
#include <iostream>
using namespace std;

int main()
{
    cout << "Escriba las notas de los 5 alumnos" << endl;
    vector<int> curso(5);
    for (int i = 0; i < 5; i++)
    { // POSICIONES SON 0, 1, 2, 3, 4 (MENOR ESTRICTO QUE 5)
        cin >> curso[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << curso[i] << " ";
    }
}