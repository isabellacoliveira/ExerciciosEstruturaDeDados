#include <iostream>

using namespace std; 

class Triangulo {
    public: 
        int A, B, C;

    void entrada()
    {
        cout << "defina valores para A, B e C" << endl; 
        cin >> A >> B >> C;
    }

    void setA(int A)
    {
        this->A = A;
    }
    int getNumero(){
        return A;
    }

    void setB(int B)
    {
        this->B = B;
    }
    int getB(){
        return B;
    }

    void setC(int B)
    {
        this->B = B;
    }
    int getC(){
        return B;
    }
    
    string ehTriangulo(){
        if(A < B + C && B < A + C && C < A + B ){
            cout << "é um triangulo" << endl; 
            tiparTriangulo(A, B, C);
        } else {
        cout << "não é um triangulo" << endl; 
         }
    }

    string tiparTriangulo(int a, int b, int c){
        if(a == b && b == c){
            return "Triângulo equilátero";
        } else if (a != b && a == c){
            return "Triângulo isósceles";
        } else {
            return "Triângulo escaleno";
        }
    }
};