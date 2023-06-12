    #include <cstdlib>
    #include <iostream>
    #include "NomeIdade.h"

    using namespace std;

    int main(int argc, char *argv[]) {
        ListaDeArray lista(5);
        string nomes[5];

        for (int i = 0; i < 5; i++) {
            cout << "Digite o nome da pessoa " << (i + 1) << ": ";
            cin >> nomes[i];
        }

        for (int i = 0; i < 5; i++) {
            int idade;

            cout << "Digite a idade de " << nomes[i] << ": ";
            cin >> idade;
            cin.ignore(); // Limpar o buffer de entrada

            lista.InsereFim(nomes[i], idade);
        }

        cout << "\nDados da lista:\n";
        lista.Mostra();

        system("PAUSE");
        return 0;
    }
