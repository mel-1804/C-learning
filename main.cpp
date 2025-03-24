#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// EJEMPLOS DE PROCEDIMIENTOS...............................................................
// void bienvenida()
// {
//     cout << "Bienvenido al juego" << endl;
//     cout << "PrepArese para jugar" << endl;
// }
// void edad()
// {
//     cout << "Introduzca su edad";
//     int a;
//     cin >> a;
//     cout << "Su edad es " << a << "." << endl;
// }

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
    // cout << "Hola, mundo!" << endl;
    // return 0;

    // IMPRIMIR................................................................
    // int nombre = 4;
    // int playa = 8;
    // int teclado = -2;
    // cout << nombre << ' ' << playa << ' ' << teclado << endl;

    // DECLARAR Y DEFINIR.....................................................
    // int abecedario = 10; // declarar y definir en linea
    // int casa; // primero declaro
    // casa = 8; // despues defino
    // cout << casa << endl;
    // cout << abecedario << endl;

    // TIPOS DE DATOS............................................................
    // int: entero
    // double: decimal
    // char: caracter, solo 1
    // string: alfanumerico, varios
    // bool: true = 1 y false = 0. Puedes declararlo con palabras o con numeros pero siempre en consola se imprime 1 o 0.

    // STRING Y GETLINE..........................................................
    // Cuando queremos introducir un texto en consola que el programa lo replique debemos usar getline, previamente instalar <string>, para que imprima el textocompleto, de lo cotrario imprimirá sólo la primera palabra. La estructura de getline es:
    // getline(cin, variable)
    // #include <iostream>
    // #include <string>
    // using namespace std;
    // int main()
    // {
    // string a;
    // getline(cin,a);
    // cout << a << endl;
    // }

    // OPERADORES Y SENTENCIAS.......................................................
    // suma: +
    // resta: -
    // multiplicación: *
    // división: /
    // módulo: %

    // EJEMPLO SUMA:
    // int a;
    // int b;
    // cin >> a >> b;
    // cout << a + b << endl;

    // EJEMPLO MULTIPLICACION:
    // double a;
    // double b;
    // cin >> a >> b;
    // cout << "la multiplicacion es " << a \* b << endl;

    // EJEMPLO DIVISIÓN:
    // double numerador;
    // double denominador;
    // cin >> numerador >> denominador;
    // cout << "El resultado de dividir " << numerador << " entre " << denominador << " es " << numerador / denominador << endl;

    // EJEMPLO MODULO:
    // int n;
    // cin >> n;
    // int restador;
    // cin >> restador;
    // cout << n % restador << endl;

    // CONDICIONALES IF...ELSE.............................................................
    // int nota;
    // cin >> nota;
    // if (nota >= 5)
    // {
    //     cout << "El estudiante ha aprobado" << endl;
    // }
    // else
    // {
    //     cout << "El estudiante ha suspendido" << endl;
    // }

    // SENTENCIA MULTIPLE IF:
    // cout << "Introduzca la edad de la persona ";
    // int edad;
    // cin >> edad;
    // if (edad > 1 and edad <= 3)
    //     cout << "La persona es un bebe" << endl;
    // else if (edad > 3 and edad <= 17)
    //     cout << "La persona es un joven" << endl;
    // else
    //     cout << "La persona es un adulto" << endl;

    // COMPARACIÓN DE PALABRAS (ORDENA POR ORDEN ALFABÉTICO)
    //  cout << "Introduzca las palabras a evaluar";
    //  string a, b;
    //  cin >> a;
    //  cin >> b;
    //  if (a > b)
    //      cout << a << " es mayor que " << b << endl;
    //  else if (a < b)
    //      cout << a << " es menor que " << b << endl;
    //  else
    //      cout << a << " es igual a " << b << endl;

    // EJERCICIO DE AUMENTAR UN SEGUNDO A LA HORA INGRESADA COMO INPUT
    // cout << "Introduzca la hora actual en formato digital ";
    // int hora, minuto, segundo;
    // cin >> hora >> minuto >> segundo;
    // segundo += 1; // segundo = segundo + 1   o bien   ++segundo
    // if (segundo >= 60)
    // {
    //     minuto += 1;
    //     segundo = segundo % 60;
    // }
    // else if (minuto >= 60)
    // {
    //     hora += 1;
    //     minuto = minuto % 60;
    // }
    // else if (hora >= 24)
    // {
    //     hora = hora % 24;
    // }
    // // FORMATO DIGITAL..................................
    // if (hora < 10)
    //     cout << "0";
    // cout << hora << ":";
    // if (minuto < 10)
    //     cout << "0";
    // cout << minuto << ":";
    // if (segundo < 10)
    //     cout << "0";
    // cout << segundo << endl;

    // BULCE FOR: para iteraciones con cantidad conocida de veces
    // for (int i = 0; i < 3; ++i)
    // {
    //     cout << "Hola mundo" << endl;
    // }
    // BUCLE FOR CON INPUT
    // int veces;
    // cout << "Escriba el numero de veces";
    // cin >> veces;
    // for (int i = 1; i <= veces; ++i)
    // {
    //     cout << "California" << endl;
    // }

    // BUCLE WHILE: para iteraciones con cantidad desconocida de veces
    // int numero_veces;
    // cin >> numero_veces;
    // int a, b;
    // cin >> a >> b;
    // while (numero_veces > 0)
    // {
    //     cout << a * b << endl;
    //     --numero_veces; // numero_veces = numero_veces - 1 Esto hace que la iteracion parta de 3 y cuente en reversa hasta 0. itera 3 veces en total
    // }

    // EJERCICIO: escriba un progrma que lea un numero natural n e imprima el resultado de la suma de sus cuadrados (desde 1 hasta n)
    // cout << "Introduzca un numero natural ";
    // int n;
    // cin >> n;
    // int sum = 0;
    // for (int i = 1; i <= n; ++i)
    // {
    //     sum += pow(i, 2);
    // }
    // cout << sum << endl;

    // EJERCICIO MATH OPERATIONS (BUCLE WHILE)
    // para imponer condicion de decimales:
    // cout.setf(ios::fixed);
    // // imponer condición de estrictamente 2 decimales:
    // cout.precision(2);

    // string word; // el tipo de operación
    // double a, b; // los números a operar
    // while (cin >> word and word != "parar")
    // {
    //     cin >> a;
    //     if (word == "cambio")
    //         cout << a * -1; //  si el tipo de operacion es cambio
    //     else
    //     { //  si no es cambio
    //         cin >> b;
    //         if (word == "suma")
    //             cout << a + b; // si es suma
    //         else if (word == "resta")
    //             cout << a - b; // si es resta
    //     }
    //     cout << endl;
    // }

    // FUNCIONES Y PROCEDIMIENTOS.........................................................
    // LLAMANDO PROCEDIMIENTOS, sin cout
    // bienvenida();
    // edad();
    // LLAMANDO FUNCIONES, con cout y definiendo variables (parametros)
    // double n;
    // double y;
    // cin >> n >> y;
    // cout << "el numero mayor es " << maximo(n, y) << endl;

    // PASAR POR REFERENCIA
    void swap2(int &a, int &b)
    {
    }
}
