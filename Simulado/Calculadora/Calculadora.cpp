#include <cstdlib>
#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {
    double num1, num2;
    char operacao;


    cout << "Bem vindo(a) a calculadora! Digite a operação que deseja fazer: \n" << endl;
    cout << "(S) = soma, (T) = subtracao, (M) = multiplicacao, (D) = divisao \n" << endl;

    cin >> operacao;
    cout << "Digite dois numeros para efetuar a operacao \n" << endl;
    cin >> num1 >> num2; 

    Calculadora calculadora(num1, num2, operacao);
    calculadora.CalcularOperacao();

}
