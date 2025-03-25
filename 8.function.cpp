#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// EJEMPLOS DE PROCEDIMIENTOS...............................................................
void bienvenida()
{
    cout << "Bienvenido al juego" << endl;
    cout << "PrepArese para jugar" << endl;
}

void edad()
{
    cout << "Introduzca su edad";
    int a;
    cin >> a;
    cout << "Su edad es " << a << "." << endl;
}

// EJEMPLOS DE FUNCIONES......................................................................
double maximo(double a, double b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    // FUNCIONES Y PROCEDIMIENTOS.........................................................
    // LLAMANDO PROCEDIMIENTOS, sin cout
    bienvenida();
    edad();
    // LLAMANDO FUNCIONES, con cout y definiendo variables (parametros)
    double n;
    double y;
    cin >> n >> y;
    cout << "el numero mayor es " << maximo(n, y) << endl;
}