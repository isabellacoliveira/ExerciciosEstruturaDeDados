#include <cstdlib>
#include <iostream>

using namespace std;

class Calculadora {
private:
    char operacaoDesejada;
    double n1;
    double n2;

public:
    Calculadora(double num1, double num2, char operacao) {
        operacaoDesejada = operacao;
        n1 = num1;
        n2 = num2;
    }

    void CalcularOperacao() {
            if (operacaoDesejada == 'S') {
            cout << "Soma: " << n1 + n2 << endl;
            } else if (operacaoDesejada == 'T'){
            cout << "Subtração: " << n1 - n2 << endl;
            } else if(operacaoDesejada == 'M'){
            cout << "Multiplicacao: " << n1 * n2 << endl;
            } else if(operacaoDesejada == 'D'){
                if(n2 == 0){
                    cout << "Não é possível efetuar a divisão por 0" << endl;
                } else {
                    cout << "Divisão:" << n1 / n2 << endl;
                }
            }
            else {
                cout << "Caracter invalido!" << endl;
            }
        }   
    };

