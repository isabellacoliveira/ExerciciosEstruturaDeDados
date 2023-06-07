#include <cstdlib>
#include <iostream>
#include "NumerosAleatorios.h"

using namespace std;

int main(int argc, char *argv[])
{
    FilaDeArray filaPar(50);
    FilaDeArray filaImpar(50);
    int n;
    
    for(int i=0; i<20; i++){
            cin>>n;
            if(n % 2 == 0){
                 filaPar.Insere(n);
                 }
            else{
                 filaImpar.Insere(n);
            }
    }
    
     cout<<"Numeros impares: "<<"\n";
    filaImpar.Mostra();
    cout<<"Numeros pares: "<<"\n";
    filaPar.Mostra();
    system("PAUSE");
    return EXIT_SUCCESS;
}
