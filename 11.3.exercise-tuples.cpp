#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// EJERCICIO 3 - TUPLAS:
// En la guardería Ana Luiza Porto Belo, se fomenta la motivación de aprendizaje y la
// interacción didáctica con técnicas pedagógicas paradigmáticas. En particular, cada vez
// que un profesor hace una pregunta, el primer alumno que responde (lo que sea) recibe
// una zanahoria (carrot) y, si la respuesta es lo suficientemente absurda, en lugar de una
// zanahoria se le da un dulce (sweet).
// Escriba un programa que lea una lista con los regalos dados e imprima la lista ordenada
// de los maestros, de mejor a peor. Es considerado el mejor maestro que ha dado más
// dulces. En caso de empate, gana quien haya dado más zanahorias. Si todavía hay un
// empate, el nombre del maestro se usa para romper el empate: el más corto gana y, en
// caso de empate, el más pequeño alfabéticamente.
// Entrada
// La entrada consiste en un n natural seguido de una línea vacía y de n casos, separados
// por líneas en blanco. Cada caso consiste en un t ≥ 1 natural que indica el número de
// maestros. Siguen t líneas, cada una con el nombre del maestro, la cantidad de dulces y
// la cantidad de zanahorias. Todos los nombres del mismo caso son diferentes.
// Salida
// Para cada caso, imprima la lista ordenada de los maestros, de mejor a peor. Debe
// imprimir cada nombre en una línea diferente y una línea vacía al final de cada caso.

// se usará funcion booleana y comando sort (v.begin(), v.end(), compare)

struct Maestro
{
    string nombre;
    int dulces;
    int zanahorias;
};

bool criterio_orden(Maestro &a, Maestro &b)
{
    if (a.dulces == b.dulces)
    {
        if (a.zanahorias == b.zanahorias)
        {
            if (a.nombre.size() == b.nombre.size())
            {
                return a.nombre < b.nombre; // escojo el nombre mas pequeño alfabeticamente
            }
            return a.nombre.size() < b.nombre.size(); // escojo el nombre mas corto
        }
        return a.zanahorias > b.zanahorias; // escojo el que haya dado mas zanahorias
    }
    return a.dulces > b.dulces; // escojo el que haya dado mas dulces
}

int main()
{
    int n; // nro de listas de maestros
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t; // nro de maestros
        cin >> t;
        vector<Maestro> m(t);
        for (int j = 0; j < t; j++)
        {
            cin >> m[j].nombre >> m[j].dulces >> m[j].zanahorias;
        }

        sort(m.begin(), m.end(), criterio_orden);

        for (int k = 0; k < t; k++)
            cout << m[k].nombre << endl; // imprimir lista de maestros ordenados
        cout << endl;                    // imprimir linea vacia
    }
}