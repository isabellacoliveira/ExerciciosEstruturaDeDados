#include <cstdlib>
#include <iostream>

using namespace std;

class ListaDeArray
{
      private:
             int *VET;
             int ProximaPosicaoLivre;
             int MAX;
      public:
             ListaDeArray(int qtde)
             {
                 MAX = qtde;
                 VET = new int[MAX];
                 ProximaPosicaoLivre = 0;
             }
             void InsereFim(int n)
             {
                  if(ProximaPosicaoLivre < MAX) 
				  VET[ProximaPosicaoLivre++] = n;
             }
             void InsereInicio(int n){
             	
             	if(ProximaPosicaoLivre < MAX){
				 			 
             	 	
             	 	for(int i=ProximaPosicaoLivre; i>=0; i--){
             	 		
             	 			VET[i]=VET[i-1];
             	 		
					  }
					  VET[0] = n;
					  ProximaPosicaoLivre++;
				  } 
             }
             			 
             void Mostra()
             {
                  for(int i = 0; i<ProximaPosicaoLivre; i++)
                  {
                          cout <<VET[i] <<"\n";
                  }
             }
             int RetiraInicio()
             {
                  if(ProximaPosicaoLivre > 0)
                  {
                      int ValorDeRetorno = VET[0];
                      for(int i = 0; i < ProximaPosicaoLivre; i++)
                      {
                              VET[i] = VET[i+1];
                      }
                      ProximaPosicaoLivre--;
                      return ValorDeRetorno;
                  }
             }
             int RetiraFim()
             {
                  if(ProximaPosicaoLivre > 0) 
				  return VET[--ProximaPosicaoLivre];
             }
};

