#include <iostream>
using namespace std;

struct Persona
{
    string nombre;
    int edad;
    bool es_sano;
    string lugar;
    double indice_glucemico;
};

int main()
{
    Persona revista;
    cout << "introduzca el nombre de la persona: " << endl;
    cin >> revista.nombre;
    cout << "escriba la edad de la persona: " << endl;
    cin >> revista.edad;
    cout << "introduzca el indica glucemico de la persona" << endl;
    cin >> revista.indice_glucemico;

    revista.es_sano = (revista.indice_glucemico >= 2); // supuesto es sano si el indica glucemico es mayor o igual que 2
    cout << "Escriba el lugar donde reside la persona: " << endl;
    cin >> revista.lugar;
    cout << endl;
    cout << "La persona se llama " << revista.nombre << "." << endl;
    cout << "Su edad es de " << revista.edad << " años." << endl;
    if (revista.es_sano)
        cout << "la persona es sana" << endl;
    else
        cout << "la persona esta enferma" << endl;
    cout << "El indice glucemico de " << revista.nombre << " es de " << revista.indice_glucemico << "." << endl;
    cout << "La persona reside en " << revista.lugar << "." << endl;
}