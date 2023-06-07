#include <iostream>

using namespace std;

class Calendario
{
public:
    int dia;
    int mes;
    int ano;

    Calendario(int d, int m, int a) // construtor com parâmetros
    {
        dia = d;
        mes = m;
        ano = a;
    }

    int anoBissexto()
    {
        if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0))
            return true;
        else
            return false;
    }

    int diaDaSemana(){
        int f;
        if (mes < 3)
            f = (((23 * mes)/9) + dia + 4 + ano + ((ano-1)/4) - ((ano-1)/100) + ((ano-1)/400)) % 7;
        else
        f = (((23 * mes)/9) + dia + 4 + ano + (ano/4) - (ano/100) + (ano/400) - 2 ) % 7;
        return f + 1;
    }

    int imprimeCalendario()
    {
        cout << "DOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n\n";

        short TamanhoDoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (anoBissexto() == true)
        {
            TamanhoDoMes[1] = 29;
        }
        for (int j = 1; j < diaDaSemana(); j++)
            cout << '\t';
        for (int dia = 1; dia <= TamanhoDoMes[mes - 1]; dia++)
        {
            setDay(dia);
            if (dia < 10)
                cout << '0' << dia << '\t';
            else
                cout << dia << '\t';
            if (diaDaSemana() == 7)
                cout << '\n';
        }
    }

     void setDay(int dia){
    this->dia = dia;
 }
};

