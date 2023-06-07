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
             FilaDeArray(int qtde)
             {
                 MAX = qtde;
                 VET = new int[MAX];
                 ProximaPosicaoLivre = 0;
             }
             void Insere(int n)
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
             int Retira()
             {
                  if(ProximaPosicaoLivre > 0)
                  {
                      int ValorDeRetorno = VET[0];
                      for(int i = 1; i < ProximaPosicaoLivre; i++)
                      {
                              VET[i-1] = VET[i];
                      }
                      ProximaPosicaoLivre--;
                      return ValorDeRetorno;
                  }
             }
};