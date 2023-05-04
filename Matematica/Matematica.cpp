// Criar uma classe matemática que contenham dois atributos da classe A, B inteiros e os seguintes métodos:
// Entrada de dados; soma, multiplicação, subtração e divisão (fazer o tratamento da divisão, não dividir por zero)
#include "Matematica.h"
#include <iostream>

using namespace std; 

// diferenciar quando ele esta usando endereço de memoria 
// acessa o ponteiro de maneira baixa dev c++ 
int main(){
    cout << "Digite dois valores para realizar as operações" << endl; 
    int a, b;
    cin >> a;
    cin >> b;

    Matematica objeto; 
    objeto.setA(a);
    objeto.setA(b);
    cout << "soma: " << objeto.Somar(a, b) << endl; 
    cout << "subtracao: " << objeto.Subtrair(a, b) << endl; 
    cout << "multiplicacao: " << objeto.Multiplicacao(a, b) << endl; 
    if(b != 0){
        cout << "divisao: " << objeto.Divisao(a, b) << endl; 
    } else {
        cout << "Não foi possível realizar a divisão pois o segundo numero e igual a 0" << endl;
    }
}

// se for positiva (eh triangulo) retornamos a mensagem de que é um triangulo 