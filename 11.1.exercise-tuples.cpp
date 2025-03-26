#include <iostream>
#include <cmath>
using namespace std;

// EJERCICIO 1 - TUPLAS: usando la definicion de una estructura llamada Point, de coordenadas x,y, escribir una funcion llamada dist que retornara un double con la distancia euclidiana entre los 2 puntos.
// Distancia Euclidiana: distancia ordinaria, linea recta entre los 2 puntos.
// DISTANCIA = raiz cuadrada de (x2 - x1)^2 + (y2 - y1)^2
// Formula: sqrt((x2 - x1)^2 + (y2 - y1)^2)

struct Point
{
    double x, y;
};

double dist(const Point &a, const Point &b)
{
    double h_axis = pow(b.x - a.x, 2);
    double v_axis = pow(b.y - a.y, 2);

    return sqrt(h_axis + v_axis);
}

int main()
{
    Point e;
    Point f;
    cout << "Introduzca las coordenadas del primer punto " << endl;
    cin >> e.x >> e.y;
    cout << "Introduzca las coordenadas del segundo punto " << endl;
    cin >> f.x >> f.y;
    cout << "La distancia entre los puntos es: " << dist(e, f) << endl;
}