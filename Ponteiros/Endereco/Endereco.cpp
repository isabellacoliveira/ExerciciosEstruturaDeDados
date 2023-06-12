#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
  int a=2, b=3, c=4, i;
  int v[10] = {0,10,20,30,40,50,60,70,80,90};
  int *pt1, *pt2, *pt3, *vaux;
  
  pt1 = &a;
  pt2 = &b;
  pt3 = &c;
  
  cout << "Endereco de a: " << &a << endl;
  cout << "O valor de pt1 e: " << pt1 << endl;
  *pt1 = *pt1 + *pt2 + *pt3;
  cout <<" O valor da variavel apontada pot pt1: " << *pt1 << endl;
  vaux = &v[1];
  cout << " O valor da variavel apontada por vaux (v[1]) e: " << *vaux << endl;
  
  for (i =1; i<10; i = i +2) // for que carre o array de 2 em 2 posições
  {
      *vaux = *vaux + 10;// atribuindo o valor q acresce + 10 do valor já existente
      cout << " O conteúdo de v["<<i <<"] = " << *vaux << endl;
      vaux = vaux + 2;// esta varrendo o arra de 2 em 2
      }
      
      
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
