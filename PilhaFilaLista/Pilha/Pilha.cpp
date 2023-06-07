#include <cstdlib>
#include <iostream>
#include "Pilha.h"

using namespace std;

int main(int argc, char *argv[])
{
    PilhaDeArray pilha(50);
    pilha.Empilha(3);
    pilha.Empilha(5);
    pilha.Empilha(7);
    pilha.Empilha(1);
    pilha.Mostra();
    cout <<"\nDesempilha " <<pilha.Desempilha() <<".\n\n";
    cout <<"\nDesempilha " <<pilha.Desempilha() <<".\n\n";
    pilha.Mostra();
    system("PAUSE");
    return EXIT_SUCCESS;
}
