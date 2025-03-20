IMPRIMIR................................................................

int nombre = 4;
int playa = 8;
int teclado = -2;

cout << nombre << ' ' << playa << ' ' << teclado << endl;

DECLARAR Y DEFINIR.....................................................

int abecedario = 10; // declarar y definir en linea

int casa; // primero declaro
casa = 8; // despues defino

cout << casa << endl;
cout << abecedario << endl;

TIPOS DE DATOS............................................................

int: entero
double: decimal
char: caracter, solo 1
string: alfanumerico, varios
bool: true = 1 y false = 0. Puedes declararlo con palabras o con numeros pero siempre en consola se imprime 1 o 0.

STRING Y GETLINE..........................................................
Cuando queremos introducir un texto en consola que el programa lo replique debemos usar getline, previamente instalar <string>, para que imprima el textocompleto, de lo cotrario imprimirá sólo la primera palabra. La estructura de getline es:
getline(cin, variable)

#include <iostream>
#include <string>
using namespace std;

int main()
{
string a;
getline(cin,a);
cout << a << endl;
}

OPERADORES Y SENTENCIAS.......................................................
suma: +
resta: -
multiplicación: \*
división: /
módulo: %

EJEMPLOS:
int a;
int b;
cin >> a >> b;
cout << a + b << endl;

double a;
double b;
cin >> a >> b;
cout << "la multiplicacion es " << a \* b << endl;

double numerador;
double denominador;
cin >> numerador >> denominador;
cout << "El resultado de dividir " << numerador << " entre " << denominador << " es " << numerador / denominador << endl;

int n;
cin >> n;
int restador;
cin >> restador;
cout << n % restador << endl;
