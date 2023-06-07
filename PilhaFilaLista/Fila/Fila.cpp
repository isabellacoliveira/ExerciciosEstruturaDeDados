#include <cstdlib>
#include <iostream>
#include "Fila.h"

using namespace std;

int main(int argc, char *argv[])
{
    FilaDeArray fila(50);
    fila.Insere(3);
    fila.Insere(5);
    fila.Insere(7);
    fila.Insere(1);
    fila.Mostra();
    cout <<"\nRetira da fila o " <<fila.Retira() <<".\n\n";
    cout <<"\nRetira da fila o " <<fila.Retira() <<".\n\n";
    fila.Mostra();
    system("PAUSE");
    return EXIT_SUCCESS;
}
