#include <iostream>
#include <cmath>
using namespace std;

// EJERCICO 2- TUPLAS: usando la definición:
// struct Clock {
//     int h, m, s;
//}
// implemente las siguientes funciones y procedimientos:
// - funcion midnight() devuelve un reloj inicializado a medianoche;
// - procedimiento increase() aumenta el relog en un segundo;
// - procedimiento print () imprime la hora del reloj en formato hh:mm:ss en una linea.

struct Clock
{
    int h, m, s;
};

Clock midnight()
{
    Clock inicial;
    inicial.h = inicial.m = inicial.s = 0;
    return inicial;
}

void increase(Clock &r)
{
    r.s++;
    if (r.s == 60)
    {
        r.s = 0;
        r.m++;
        if (r.m == 60)
        {
            r.m = 0;
            r.h++;
            if (r.h == 24)
            {
                r.h = 0;
            }
        }
    }
}

void print(const Clock &r)
{
    if (r.h < 10)
        cout << "0";    // se ejecuta solo si se cumple la condicion
    cout << r.h << ":"; // se ejecuta siempre7
    if (r.m < 10)
        cout << "0";
    cout << r.m << ":";
    if (r.s < 10)
        cout << "0";
    cout << r.s << endl;
}

int main()
{
    Clock reloj;
    cout << "ingrese horas, minutos y segundos: " << endl;
    cin >> reloj.h >> reloj.m >> reloj.s;
    print(reloj);
    cout << "aumentando un segundo: " << endl;
    increase(reloj);
    print(reloj);
    cout << "reiniciando la hora a medianoche..." << endl;
    reloj = midnight();
    print(reloj);
}