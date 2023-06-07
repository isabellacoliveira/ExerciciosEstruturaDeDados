#include <cstdlib>
#include <iostream>
#include "ListaEncadeada.h"

using namespace std;

int main(int argc, char *argv[])
{
    ListaDeArray lista(50);
    lista.Insere(1);
    lista.Insere(12);
    lista.Insere(3);
    lista.Insere(7);
    lista.Remove(200);
    lista.Remove(3);
    lista.Mostra();
    cout <<"\n\n\n";
    cout <<lista.Busca(5) <<"\n\n\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}
// diferença entre a lista encadeada e a fila 
