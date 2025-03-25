#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    // BUCLE FOR: para iteraciones con cantidad conocida de veces
    for (int i = 0; i < 3; ++i)
    {
        cout << "Hola mundo" << endl;
    }
    // BUCLE FOR CON INPUT
    int veces;
    cout << "Escriba el numero de veces";
    cin >> veces;
    for (int i = 1; i <= veces; ++i)
    {
        cout << "California" << endl;
    }

    // BUCLE WHILE: para iteraciones con cantidad desconocida de veces
    int numero_veces;
    cin >> numero_veces;
    int a, b;
    cin >> a >> b;
    while (numero_veces > 0)
    {
        cout << a * b << endl;
        --numero_veces; // numero_veces = numero_veces - 1 Esto hace que la iteracion parta de 3 y cuente en reversa hasta 0. itera 3 veces en total
    }

    // EJERCICIO: escriba un progrma que lea un numero natural n e imprima el resultado de la suma de sus cuadrados (desde 1 hasta n)
    cout << "Introduzca un numero natural ";
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += pow(i, 2);
    }
    cout << sum << endl;

    // EJERCICIO MATH OPERATIONS (BUCLE WHILE)
    // para imponer condicion de decimales:
    cout.setf(ios::fixed);
    // imponer condición de estrictamente 2 decimales:
    cout.precision(2);

    string word; // el tipo de operación
    double a, b; // los números a operar
    while (cin >> word and word != "parar")
    {
        cin >> a;
        if (word == "cambio")
            cout << a * -1; //  si el tipo de operacion es cambio
        else
        { //  si no es cambio
            cin >> b;
            if (word == "suma")
                cout << a + b; // si es suma
            else if (word == "resta")
                cout << a - b; // si es resta
        }
        cout << endl;
    }
}