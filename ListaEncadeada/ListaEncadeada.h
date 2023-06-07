#include <cstdlib>
#include <iostream>

using namespace std;

class ListaDeArray
{
      private:
             int *VET;
             int ProximaPosicaoLivre;
      public:
             ListaDeArray(int qtde)
             {
                 VET = new int[qtde];
                 ProximaPosicaoLivre = 0;
             }
             void Insere(int n)
             {
                  int pos = ProximaPosicaoLivre - 1;
                  while((n < VET[pos]) && (pos > -1))
                  {
                          VET[pos+1] = VET[pos];
                          pos--;
                  }
                  VET[pos+1] = n;
                  ProximaPosicaoLivre++;
             }
             void Mostra()
             {
                  for(int i = 0; i<ProximaPosicaoLivre; i++)
                  {
                          cout <<VET[i] <<"\n";
                  }
             }
        //  busca um parametro e faz a varredura do 0 ao limite
        //  retorna o indice se achar, se não retorna o -1 
        // por que ele tem parametro? por que na fila nao temos um parametro
        // o metodo de tirar da fila. Pois na lista encadeada, podemos tirar de 
        // onde queremos, ja na lista simples, vamos tirar de onde é especifico
        // na fila, sempre vai sair daquela posição 
             int Busca(int n)
             {
                  for(int i = 0; i<ProximaPosicaoLivre; i++)
                  {
                          if(n == VET[i]) return i;
                  }
                  return -1;
             }
             void Remove(int n)
             {
                  int pos = Busca(n);
                //   significa que temos um indice valido 
                //  para sobreescrever é só mover a lista 
                  if(pos > -1)
                  {
                         for(int i = pos+1; i < ProximaPosicaoLivre; i++)
                         {
                                 VET[i-1] = VET[i];
                         }
                         ProximaPosicaoLivre--;
                  }
             }
};