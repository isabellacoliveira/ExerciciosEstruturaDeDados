#include <cstdlib>
#include <iostream>
#include "NumerosDivisiveis.h"

using namespace std;

int main()
{
    FilaDeArray fila(20);
    FilaDeArray divisivelPorTres(50);
    FilaDeArray divisivelPorQuatro(50);
    FilaDeArray divisivelPorCinco(50);
    FilaDeArray divisivelPorNenhum(50);
    int n;

    for(int i = 0; i < 20; i++){
         int numero;
        cin >> numero;

        if(n % 3 == 0){
            divisivelPorTres.Enfilera(n);
        } else if (n % 4 == 0){
            divisivelPorQuatro.Enfilera(n);
        } else if (n % 5 == 0) {
            divisivelPorQuatro.Enfilera(n);
        } else {
            divisivelPorNenhum.Enfilera(n);
        }

        cout<<"Numeros dvisiveis por 3: "<<"\n";
        divisivelPorTres.Mostra();
        cout<<"Numeros divisiveis por 5: "<<"\n";
        divisivelPorQuatro.Mostra();
        cout<<"Numeros divisiveis por 5: "<<"\n";
        divisivelPorQuatro.Mostra();
        cout<<"Numeros não divisiveis: "<<"\n";
        divisivelPorQuatro.Mostra();
        system("PAUSE");
    }
    
}