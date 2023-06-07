#include <cstdlib>
#include <iostream>

using namespace std;

class No{
      
      public:
             
      No *proxNo;
      int dado;
      
      No ()
      {
           proxNo = NULL;
      }
            
      bool UltimoNo ()
      {
         return (proxNo == NULL);  
      }      
};

class Pilha{
      
      
      No *topo;
      
      public:
             
      Pilha ()
      {
            topo = NULL;
      }
      
      bool PilhaVazia()
      {
         return (topo == NULL);  
      }
    //   o ponteiro sempre recebe algum endereço
    //  o ultimo sempre aponta para nulo, o proximo nó guarda o endereço do nó anterior 
      void Empilha (int NovoDado)
      {
          No *novoNo = new No();// com o new ele passa a existir na memoria e só sai q eu apagar
          novoNo->dado = NovoDado;
          novoNo->proxNo = topo; // o topo esta apontando para o último obj e o novoNo cria o elo com o topo
          topo = novoNo;
      }
      
      int Desempilha()
      {
        // vai guardar a referencia do no que vamos retirar 
          int temp_Dado = 0;
        //  ponteiro
          No *temp_proxNo = NULL;
          
          if ( PilhaVazia()== false){
                    // antes de deletar, gravamos o dado e o prox no 
                    temp_Dado = topo->dado;
                    temp_proxNo = topo->proxNo;

                    delete topo; // apagando o conteúdo do objeto q esta sendo apontado
                    topo  = temp_proxNo; // porque o topo esta sem referencia e agora eu estou redirecionando-o
          }
          return temp_Dado;
      }   
};