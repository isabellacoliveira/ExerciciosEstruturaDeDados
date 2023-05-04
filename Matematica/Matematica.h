#include <iostream>

using namespace std;

class Matematica
{
public:
    int A;
    int B;

    void setA(int A)
    {
        this->A = A;
    }
    int getNumero()
    {
        return A;
    }
    void setB(int B)
    {
        this->B = B;
    }
    int getB()
    {
        return B;
    }

    int Somar(int A, int B)
    {
        int soma = A + B;
        return soma;
    }

    int Subtrair(int A, int B)
    {
        int subtracao = A - B;
        return subtracao;
    }

    int Multiplicacao(int A, int B)
    {
        int multiplicacao = A * B;
        return multiplicacao;
    }

    float Divisao(float A, float B)
    {

            float divisao = A / B;
            return divisao;
    }
};