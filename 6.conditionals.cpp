#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    // CONDICIONALES IF...ELSE.............................................................
    int nota;
    cin >> nota;
    if (nota >= 5)
    {
        cout << "El estudiante ha aprobado" << endl;
    }
    else
    {
        cout << "El estudiante ha suspendido" << endl;
    }

    // SENTENCIA MULTIPLE IF:
    cout << "Introduzca la edad de la persona ";
    int edad;
    cin >> edad;
    if (edad > 1 and edad <= 3)
        cout << "La persona es un bebe" << endl;
    else if (edad > 3 and edad <= 17)
        cout << "La persona es un joven" << endl;
    else
        cout << "La persona es un adulto" << endl;

    // COMPARACIÓN DE PALABRAS (ORDENA POR ORDEN ALFABÉTICO)
    cout << "Introduzca las palabras a evaluar";
    string a, b;
    cin >> a;
    cin >> b;
    if (a > b)
        cout << a << " es mayor que " << b << endl;
    else if (a < b)
        cout << a << " es menor que " << b << endl;
    else
        cout << a << " es igual a " << b << endl;

    // EJERCICIO DE AUMENTAR UN SEGUNDO A LA HORA INGRESADA COMO INPUT
    cout << "Introduzca la hora actual en formato digital ";
    int hora, minuto, segundo;
    cin >> hora >> minuto >> segundo;
    segundo += 1; // segundo = segundo + 1   o bien   ++segundo
    if (segundo >= 60)
    {
        minuto += 1;
        segundo = segundo % 60;
    }
    else if (minuto >= 60)
    {
        hora += 1;
        minuto = minuto % 60;
    }
    else if (hora >= 24)
    {
        hora = hora % 24;
    }

    // // FORMATO DIGITAL..................................
    if (hora < 10)
        cout << "0";
    cout << hora << ":";
    if (minuto < 10)
        cout << "0";
    cout << minuto << ":";
    if (segundo < 10)
        cout << "0";
    cout << segundo << endl;
}