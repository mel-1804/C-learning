#include <iostream>
#include <vector>
using namespace std;

// ELEMENTOS SOLITARIOS: contruya un programa llamado solitarios que devuelva el nor de elementos solitarios en ese vector.
// Un elemento solitario es aquel que es distintos a su sucesor y antecesor.

int solitarios(const vector<int> &v)
{
    int s = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i == 0)
        {
            if (v[i] != v[i + 1])
                s++;
        }
        else if (v[i] != v[i + 1] && v[i] != v[i - 1])
            s++;
        else if (i == v.size() - 1)
            if (v[i] != v[i - 1])
                s++;
    }
    return s;
}

int main()
{
    vector<int> v = {-7, 5, 5, 5, -2, 2, 5, 1, 1};
    int contador = solitarios(v);
    cout << "El nro de elementos solitarios es: " << contador << endl;
}