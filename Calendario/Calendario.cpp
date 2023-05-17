#include "Calendario.h"
#include <iostream>

using namespace std;

int main()
{
    Calendario objeto(1, 2, 2020);
    cout << objeto.anoBissexto() << endl;
    cout << objeto.imprimeCalendario() << endl;
}