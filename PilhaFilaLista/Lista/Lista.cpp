#include <cstdlib>
#include <iostream>
#include "Lista.h"

using namespace std;

int main(int argc, char *argv[])
{
    ListaDeArray lista(50);
    lista.InsereInicio(3);
    lista.InsereInicio(5);
    lista.Mostra();
    cout <<"\nRetira da fila o " <<lista.RetiraFim() <<".\n\n";
    lista.Mostra();
    system("PAUSE");
    return EXIT_SUCCESS;
}