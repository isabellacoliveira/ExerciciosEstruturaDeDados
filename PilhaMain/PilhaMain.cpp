#include <cstdlib>
#include <iostream>
#include "PilhaMain.h"

using namespace std;

int main(int argc, char *argv[])
{
    
    Pilha p;
    cout << p.PilhaVazia()<<"\n";
    p.Empilha(5);
   
    p.Empilha(8);
    p.Empilha(10);
    p.Empilha(15);
    cout <<"Dado desempilhada: "<< p.Desempilha()<< "\n";
    cout <<"Dado desempilhada: "<< p.Desempilha()<< "\n";
    cout <<"Dado desempilhada: "<< p.Desempilha()<< "\n";
    cout <<"Dado desempilhada: "<< p.Desempilha()<< "\n";
    cout << p.PilhaVazia()<<"\n";
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
