#include <iostream>

using namespace std;

int receberNumeros(int a, int b, int *pont1, int *pont2){
        cout<<"Digite 2 valores" << endl;
        cin >> a >> b;
        // associa valores aos vetores 
        pont1=&a;
	    pont2=&b;

        // é mostrado o endereço de memoria de cada um deles 
        cout<<&a<<"\n";
        cout<<&b<<"\n";
        cout<<pont1<<"\n";
        cout<<pont2<<"\n";


        if(a % 2 != 0){
            cout << "Numero impar: " << a << endl;
        } 
        if(b % 2 != 0){
            cout << "Numero impar: " << b << endl;
        }
}


int main(){
    int a, b;
    int *pont1, *pont2;

    receberNumeros(a, b, pont1, pont2);
}
