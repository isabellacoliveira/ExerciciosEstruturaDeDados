#include <iostream>

using namespace std; 

class Estacionamento {
    public: 
        int dia;
        int horaEntrada;
        int horaSaida;

    int solicitarDados(int entrada, int saida) {
        cout << "Digite o horario de entrada no estacionamento " << endl; 
        cin >> entrada; 
        cout << "Digite o horario de saida no estacionamento " << endl; 
        cin >> saida; 
        calcularPagamento(entrada, saida);
    }

    int calcularPagamento(int entrada, int saida){
        if(entrada > 0 && entrada < 23 && saida > 0 && saida < 23){
            int horasPermanecidas = saida - entrada;
            int valorAPagar = horasPermanecidas * 5;
            cout << "Valor a pagar " << valorAPagar << " reais" << endl; 
        } else if (entrada > 23 & saida > 23) {
            cout << "Nao e possivel inserir um valor maior que 24 horas" << endl; 
        } else {
            cout << "Nao e possivel inserir horas negativas!" << endl; 
        }   
    }   
};