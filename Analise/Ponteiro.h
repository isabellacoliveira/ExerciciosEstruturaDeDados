#include <cstdlib>
#include <iostream>

using namespace std;

class PilhaDeArray
{
      private:
             int *VET;
             int ProximaPosicaoLivre;
             int MAX;
      public:
             PilhaDeArray(int qtde)
             {
                 MAX = qtde;
                 VET = new int[MAX];
                 ProximaPosicaoLivre = 0;
             }
             void Empilha(int n)
             {
                  if(ProximaPosicaoLivre < MAX) 
			VET[ProximaPosicaoLivre++] = n;
             }
             void Mostra()
             {
                  for(int i = 0; i<ProximaPosicaoLivre; i++)
                  {
                          cout <<VET[i] <<"\n";
                  }
             }
             int Desempilha()
             {
                  if(ProximaPosicaoLivre > 0) 
			return VET[--ProximaPosicaoLivre];
             }
};

