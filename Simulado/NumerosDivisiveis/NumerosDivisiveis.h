#include <cstdlib>
#include <iostream>

using namespace std;

class FilaDeArray
{
      private:
             int *VET;
             int ProximaPosicaoLivre;
             int MAX;
      public:
    FilaDeArray(int qtde) {
        MAX = qtde;
        VET = new int[MAX];
        ProximaPosicaoLivre = 0;
    }

    void Enfilera(int n) {
        if (ProximaPosicaoLivre < MAX)
            VET[ProximaPosicaoLivre++] = n;
    }

    void Mostra() {
        for (int i = 0; i < ProximaPosicaoLivre; i++) {
            cout << VET[i] << "\n";
        }
    }

    int Desenfilera() {
        if (ProximaPosicaoLivre > 0) {
            int valorDesenfileirado = VET[0];
            for (int i = 0; i < ProximaPosicaoLivre - 1; i++) {
                VET[i] = VET[i + 1];
            }
            ProximaPosicaoLivre--;
            return valorDesenfileirado;
        }
    }
};